// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_log_norm_const_gaussian
arma::cube calc_log_norm_const_gaussian(const List& prevalence_map, NumericVector boundaries, double sd);
RcppExport SEXP _AMISforInfectiousDiseases_calc_log_norm_const_gaussian(SEXP prevalence_mapSEXP, SEXP boundariesSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type prevalence_map(prevalence_mapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type boundaries(boundariesSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_log_norm_const_gaussian(prevalence_map, boundaries, sd));
    return rcpp_result_gen;
END_RCPP
}
// compute_weight_matrix_empirical_gauss
arma::mat compute_weight_matrix_empirical_gauss(const arma::mat& likelihoods, const arma::vec& prev_sim, List amis_params, const arma::mat& weight_matrix, arma::uvec& sim_within_boundaries, arma::uvec& sim_outside_boundaries, arma::uvec& locs);
RcppExport SEXP _AMISforInfectiousDiseases_compute_weight_matrix_empirical_gauss(SEXP likelihoodsSEXP, SEXP prev_simSEXP, SEXP amis_paramsSEXP, SEXP weight_matrixSEXP, SEXP sim_within_boundariesSEXP, SEXP sim_outside_boundariesSEXP, SEXP locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type likelihoods(likelihoodsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< List >::type amis_params(amis_paramsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weight_matrix(weight_matrixSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_outside_boundaries(sim_outside_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type locs(locsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_weight_matrix_empirical_gauss(likelihoods, prev_sim, amis_params, weight_matrix, sim_within_boundaries, sim_outside_boundaries, locs));
    return rcpp_result_gen;
END_RCPP
}
// compute_weight_matrix_empirical_histogram
arma::mat compute_weight_matrix_empirical_histogram(const arma::mat& likelihoods, const arma::vec& prev_sim, List amis_params, const arma::mat& weight_matrix, arma::uvec& is_within_boundaries, arma::uvec& sim_within_boundaries, arma::uvec& sim_outside_boundaries, arma::uvec& locs);
RcppExport SEXP _AMISforInfectiousDiseases_compute_weight_matrix_empirical_histogram(SEXP likelihoodsSEXP, SEXP prev_simSEXP, SEXP amis_paramsSEXP, SEXP weight_matrixSEXP, SEXP is_within_boundariesSEXP, SEXP sim_within_boundariesSEXP, SEXP sim_outside_boundariesSEXP, SEXP locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type likelihoods(likelihoodsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< List >::type amis_params(amis_paramsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weight_matrix(weight_matrixSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type is_within_boundaries(is_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_outside_boundaries(sim_outside_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type locs(locsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_weight_matrix_empirical_histogram(likelihoods, prev_sim, amis_params, weight_matrix, is_within_boundaries, sim_within_boundaries, sim_outside_boundaries, locs));
    return rcpp_result_gen;
END_RCPP
}
// compute_weight_matrix_empirical_uniform
arma::mat compute_weight_matrix_empirical_uniform(const arma::mat& likelihoods, const arma::vec& prev_sim, List amis_params, const arma::mat& weight_matrix, arma::uvec& is_within_boundaries, arma::uvec& sim_within_boundaries, arma::uvec& sim_outside_boundaries, arma::uvec& locs);
RcppExport SEXP _AMISforInfectiousDiseases_compute_weight_matrix_empirical_uniform(SEXP likelihoodsSEXP, SEXP prev_simSEXP, SEXP amis_paramsSEXP, SEXP weight_matrixSEXP, SEXP is_within_boundariesSEXP, SEXP sim_within_boundariesSEXP, SEXP sim_outside_boundariesSEXP, SEXP locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type likelihoods(likelihoodsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< List >::type amis_params(amis_paramsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weight_matrix(weight_matrixSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type is_within_boundaries(is_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_outside_boundaries(sim_outside_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type locs(locsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_weight_matrix_empirical_uniform(likelihoods, prev_sim, amis_params, weight_matrix, is_within_boundaries, sim_within_boundaries, sim_outside_boundaries, locs));
    return rcpp_result_gen;
END_RCPP
}
// compute_weight_matrix_nonRN_Rcpp
arma::mat compute_weight_matrix_nonRN_Rcpp(const arma::mat& likelihoods, List amis_params, const arma::mat& weight_matrix, arma::uvec& sim_within_boundaries, arma::uvec& sim_outside_boundaries, arma::uvec& locs);
RcppExport SEXP _AMISforInfectiousDiseases_compute_weight_matrix_nonRN_Rcpp(SEXP likelihoodsSEXP, SEXP amis_paramsSEXP, SEXP weight_matrixSEXP, SEXP sim_within_boundariesSEXP, SEXP sim_outside_boundariesSEXP, SEXP locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type likelihoods(likelihoodsSEXP);
    Rcpp::traits::input_parameter< List >::type amis_params(amis_paramsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weight_matrix(weight_matrixSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_outside_boundaries(sim_outside_boundariesSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type locs(locsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_weight_matrix_nonRN_Rcpp(likelihoods, amis_params, weight_matrix, sim_within_boundaries, sim_outside_boundaries, locs));
    return rcpp_result_gen;
END_RCPP
}
// f_estimator_Gaussian
arma::mat f_estimator_Gaussian(arma::mat& prevalence_map, arma::vec& prev_sim, double sd, arma::uvec& sim_within_boundaries, List& which_valid_prev_map_t, arma::mat& log_norm_const_gaussian_t);
RcppExport SEXP _AMISforInfectiousDiseases_f_estimator_Gaussian(SEXP prevalence_mapSEXP, SEXP prev_simSEXP, SEXP sdSEXP, SEXP sim_within_boundariesSEXP, SEXP which_valid_prev_map_tSEXP, SEXP log_norm_const_gaussian_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type prevalence_map(prevalence_mapSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< List& >::type which_valid_prev_map_t(which_valid_prev_map_tSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type log_norm_const_gaussian_t(log_norm_const_gaussian_tSEXP);
    rcpp_result_gen = Rcpp::wrap(f_estimator_Gaussian(prevalence_map, prev_sim, sd, sim_within_boundaries, which_valid_prev_map_t, log_norm_const_gaussian_t));
    return rcpp_result_gen;
END_RCPP
}
// f_estimator_histogram
arma::mat f_estimator_histogram(arma::mat& prevalence_map, arma::vec& prev_sim, arma::vec& breaks, List& which_valid_prev_map_t);
RcppExport SEXP _AMISforInfectiousDiseases_f_estimator_histogram(SEXP prevalence_mapSEXP, SEXP prev_simSEXP, SEXP breaksSEXP, SEXP which_valid_prev_map_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type prevalence_map(prevalence_mapSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type breaks(breaksSEXP);
    Rcpp::traits::input_parameter< List& >::type which_valid_prev_map_t(which_valid_prev_map_tSEXP);
    rcpp_result_gen = Rcpp::wrap(f_estimator_histogram(prevalence_map, prev_sim, breaks, which_valid_prev_map_t));
    return rcpp_result_gen;
END_RCPP
}
// f_estimator_uniform
arma::mat f_estimator_uniform(arma::mat& prevalence_map, arma::vec& prev_sim, double delta, arma::uvec& sim_within_boundaries, List& which_valid_prev_map_t, arma::vec& boundaries);
RcppExport SEXP _AMISforInfectiousDiseases_f_estimator_uniform(SEXP prevalence_mapSEXP, SEXP prev_simSEXP, SEXP deltaSEXP, SEXP sim_within_boundariesSEXP, SEXP which_valid_prev_map_tSEXP, SEXP boundariesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type prevalence_map(prevalence_mapSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type prev_sim(prev_simSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type sim_within_boundaries(sim_within_boundariesSEXP);
    Rcpp::traits::input_parameter< List& >::type which_valid_prev_map_t(which_valid_prev_map_tSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type boundaries(boundariesSEXP);
    rcpp_result_gen = Rcpp::wrap(f_estimator_uniform(prevalence_map, prev_sim, delta, sim_within_boundaries, which_valid_prev_map_t, boundaries));
    return rcpp_result_gen;
END_RCPP
}
// get_which_valid_prev_map
List get_which_valid_prev_map(const List& prevalence_map, NumericVector boundaries);
RcppExport SEXP _AMISforInfectiousDiseases_get_which_valid_prev_map(SEXP prevalence_mapSEXP, SEXP boundariesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type prevalence_map(prevalence_mapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type boundaries(boundariesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_which_valid_prev_map(prevalence_map, boundaries));
    return rcpp_result_gen;
END_RCPP
}
// get_which_valid_locs_prev_map
List get_which_valid_locs_prev_map(List& which_valid_prev_map, int n_tims, int n_locs);
RcppExport SEXP _AMISforInfectiousDiseases_get_which_valid_locs_prev_map(SEXP which_valid_prev_mapSEXP, SEXP n_timsSEXP, SEXP n_locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type which_valid_prev_map(which_valid_prev_mapSEXP);
    Rcpp::traits::input_parameter< int >::type n_tims(n_timsSEXP);
    Rcpp::traits::input_parameter< int >::type n_locs(n_locsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_which_valid_locs_prev_map(which_valid_prev_map, n_tims, n_locs));
    return rcpp_result_gen;
END_RCPP
}
// get_locations_first_t
arma::ivec get_locations_first_t(List& which_valid_locs_prev_map, int n_tims, int n_locs);
RcppExport SEXP _AMISforInfectiousDiseases_get_locations_first_t(SEXP which_valid_locs_prev_mapSEXP, SEXP n_timsSEXP, SEXP n_locsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type which_valid_locs_prev_map(which_valid_locs_prev_mapSEXP);
    Rcpp::traits::input_parameter< int >::type n_tims(n_timsSEXP);
    Rcpp::traits::input_parameter< int >::type n_locs(n_locsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_locations_first_t(which_valid_locs_prev_map, n_tims, n_locs));
    return rcpp_result_gen;
END_RCPP
}
// get_locs_RN
List get_locs_RN(arma::ivec& locations_first_t, int n_tims);
RcppExport SEXP _AMISforInfectiousDiseases_get_locs_RN(SEXP locations_first_tSEXP, SEXP n_timsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec& >::type locations_first_t(locations_first_tSEXP);
    Rcpp::traits::input_parameter< int >::type n_tims(n_timsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_locs_RN(locations_first_t, n_tims));
    return rcpp_result_gen;
END_RCPP
}
// get_locs_nonRN
List get_locs_nonRN(arma::ivec& locations_first_t, int n_tims);
RcppExport SEXP _AMISforInfectiousDiseases_get_locs_nonRN(SEXP locations_first_tSEXP, SEXP n_timsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec& >::type locations_first_t(locations_first_tSEXP);
    Rcpp::traits::input_parameter< int >::type n_tims(n_timsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_locs_nonRN(locations_first_t, n_tims));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_AMISforInfectiousDiseases_calc_log_norm_const_gaussian", (DL_FUNC) &_AMISforInfectiousDiseases_calc_log_norm_const_gaussian, 3},
    {"_AMISforInfectiousDiseases_compute_weight_matrix_empirical_gauss", (DL_FUNC) &_AMISforInfectiousDiseases_compute_weight_matrix_empirical_gauss, 7},
    {"_AMISforInfectiousDiseases_compute_weight_matrix_empirical_histogram", (DL_FUNC) &_AMISforInfectiousDiseases_compute_weight_matrix_empirical_histogram, 8},
    {"_AMISforInfectiousDiseases_compute_weight_matrix_empirical_uniform", (DL_FUNC) &_AMISforInfectiousDiseases_compute_weight_matrix_empirical_uniform, 8},
    {"_AMISforInfectiousDiseases_compute_weight_matrix_nonRN_Rcpp", (DL_FUNC) &_AMISforInfectiousDiseases_compute_weight_matrix_nonRN_Rcpp, 6},
    {"_AMISforInfectiousDiseases_f_estimator_Gaussian", (DL_FUNC) &_AMISforInfectiousDiseases_f_estimator_Gaussian, 6},
    {"_AMISforInfectiousDiseases_f_estimator_histogram", (DL_FUNC) &_AMISforInfectiousDiseases_f_estimator_histogram, 4},
    {"_AMISforInfectiousDiseases_f_estimator_uniform", (DL_FUNC) &_AMISforInfectiousDiseases_f_estimator_uniform, 6},
    {"_AMISforInfectiousDiseases_get_which_valid_prev_map", (DL_FUNC) &_AMISforInfectiousDiseases_get_which_valid_prev_map, 2},
    {"_AMISforInfectiousDiseases_get_which_valid_locs_prev_map", (DL_FUNC) &_AMISforInfectiousDiseases_get_which_valid_locs_prev_map, 3},
    {"_AMISforInfectiousDiseases_get_locations_first_t", (DL_FUNC) &_AMISforInfectiousDiseases_get_locations_first_t, 3},
    {"_AMISforInfectiousDiseases_get_locs_RN", (DL_FUNC) &_AMISforInfectiousDiseases_get_locs_RN, 2},
    {"_AMISforInfectiousDiseases_get_locs_nonRN", (DL_FUNC) &_AMISforInfectiousDiseases_get_locs_nonRN, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_AMISforInfectiousDiseases(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
