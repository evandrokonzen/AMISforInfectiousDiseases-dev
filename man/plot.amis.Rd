% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AMIS_outputs.R
\name{plot.amis}
\alias{plot.amis}
\title{Plot histogram or credible interval of weighted distributions given a model fitted by \code{\link{amis}}}
\usage{
\method{plot}{amis}(
  x,
  what = "prev",
  type = "hist",
  locations = 1,
  time = 1,
  measure_central = "mean",
  order_locations_by = NULL,
  display_location_names = F,
  alpha = 0.05,
  breaks = 500,
  cex = 1,
  lwd = 1,
  xlim = NULL,
  main = NULL,
  xlab = NULL,
  ylab = NULL,
  ...
)
}
\arguments{
\item{x}{The output from the function \code{\link{amis}}.}

\item{what}{What posterior distribution should be plotted.
It can be 'prev' (default) for plotting prevalences, or one of the parameter names.}

\item{type}{Type of plot. It can be 'hist' (default) for histogram,
or 'CI' for credible intervals}

\item{locations}{Integer identifying the locations. Default to 1.}

\item{time}{Integer identifying the timepoint. Default to 1.}

\item{measure_central}{Measure of central tendency for credible interval plots.
It can be 'mean' (default) or 'median'.}

\item{order_locations_by}{How the credible intervals of multiple locations should be ordered.
If NULL (default), locations are displayed according to the argument 'locations'.
Otherwise, it must be either 'prev' or one of the parameter names, and then the
locations are ranked by the corresponding measure of central tendency.}

\item{display_location_names}{Logical indicating whether location names are to be shown or not
in credible interval plots. Default to FALSE.}

\item{alpha}{Numeric value between 0 and 1 indicating the endpoints of the
credible intervals, which are evaluated at (alpha/2, 1-alpha/2)\% quantiles.
Default (0.05) will create 95\% credible intervals.}

\item{breaks}{Argument passed to \code{\link{wtd.hist}} for histogram plots.
Default to 500.}

\item{cex}{Argument passed to plots of credible intervals.
Default to 1}

\item{lwd}{Argument passed to plots of credible intervals.
Default to 1.}

\item{xlim}{The x limits of the plots. For for credible intervals of multiple
statistics (i.e. length(what)>1), it must be either NULL or a list with
the x limits for each statistic. Default to NULL.}

\item{main}{Title for the plot.}

\item{xlab}{Lable for the x axis.}

\item{ylab}{Lable for the y axis.}

\item{...}{Other graphical parameters passed to \code{\link{wtd.hist}}.}
}
\value{
A plot.
}
\description{
Plot histogram or credible interval of weighted distributions given a model fitted by \code{\link{amis}}
}
