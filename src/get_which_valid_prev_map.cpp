#include <RcppArmadillo.h>
#include "functions.h"

//' @title Check which prevalence samples are valid for each location at each time point.
//' @param prevalence_map List where each element is prevalence_map data for a time point.
//' @param boundaries Vector of length two.
//' @return A list where each element corresponds to a time point. For each time point, there will 
//' be a list of n_locs elements, where each one shows which samples (out of M) are valid. 
//' @export
// [[Rcpp::export]]
List get_which_valid_prev_map(const List& prevalence_map, 
                              NumericVector boundaries){
  int TT = prevalence_map.size();
  List prev_t_list = prevalence_map(0);
  NumericMatrix prev_t = prev_t_list["data"];
  int L = prev_t.nrow();
  int M = prev_t.ncol();
  LogicalVector m_idx(M);
  Rcpp::IntegerVector v = Rcpp::seq(0, M-1);
  Rcpp::List prev_map_valid_samples(TT);
  double p;
  for (int t=0; t<TT; t++) {
    List prev_t_list = prevalence_map(t);
    NumericMatrix prev_t = prev_t_list["data"];
    Rcpp::List valid_samples_t(L);
    for (int l=0; l<L; l++) {
      for (int m=0; m<M; m++) {
        p = prev_t(l,m);
        m_idx[m] = !NumericVector::is_na(p) && (p>=boundaries[0]) && (p<=boundaries[1]);
      }
      IntegerVector valid_samples_t_l = v[m_idx];
      valid_samples_t[l] = valid_samples_t_l;
    }
    prev_map_valid_samples[t] = valid_samples_t;
  }
  return(prev_map_valid_samples);
}

//' @title Check, at each time, which locations have data
//' @param which_valid_prev_map List obtained by get_which_valid_prev_map
//' @param n_tims Number of time points
//' @param n_locs Number of locations
//' @export
// [[Rcpp::export]]
List get_which_valid_locs_prev_map(List& which_valid_prev_map, 
                                   int n_tims, int n_locs){
  List which_valid_locs_prev_map(n_tims);
  for (int t=0; t<n_tims; t++) {
    List which_valid_prev_map_t = which_valid_prev_map[t];
    arma::uvec is_valid = arma::zeros<arma::uvec>(n_locs);
    for (int l=0; l<n_locs; l++) {
      arma::uvec valid_samples_t_l = which_valid_prev_map_t[l];
      if(valid_samples_t_l.n_elem>0){
        is_valid[l] = 1L;
      }
    }
    arma::uvec which_valid_locs = arma::find(is_valid==1L);
    which_valid_locs_prev_map[t] = which_valid_locs;
  }
  return(which_valid_locs_prev_map);
}