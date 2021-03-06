% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/PhenoExtractMeth.R
\name{PhenoExtractMeth}
\alias{PhenoExtractMeth}
\alias{PhenoTrs}
\alias{PhenoDeriv}
\alias{PhenoGu}
\alias{PhenoKl}
\title{Phenology Extraction methods}
\usage{
PhenoTrs(
  fFIT,
  approach = c("White", "Trs"),
  trs = 0.5,
  asymmetric = TRUE,
  IsPlot = TRUE,
  ...
)

PhenoDeriv(
  fFIT,
  analytical = TRUE,
  smoothed.spline = FALSE,
  IsPlot = TRUE,
  show.lgd = TRUE,
  ...
)

PhenoGu(fFIT, analytical = TRUE, smoothed.spline = FALSE, IsPlot = TRUE, ...)

PhenoKl(
  fFIT,
  analytical = TRUE,
  smoothed.spline = FALSE,
  IsPlot = TRUE,
  show.lgd = TRUE,
  ...
)
}
\arguments{
\item{fFIT}{\code{fFIT} object returned by \code{\link[=optim_pheno]{optim_pheno()}}.}

\item{approach}{to be used to calculate phenology metrics.
'White' (White et al. 1997) or 'Trs' for simple threshold.}

\item{trs}{threshold to be used for approach "Trs", in (0, 1).}

\item{asymmetric}{If true, background value in spring season and autumn season
is regarded as different.}

\item{IsPlot}{whether to plot?}

\item{...}{other parameters to PhenoPlot}

\item{analytical}{If true, \code{numDeriv} package \code{grad} and \code{hess}
will be used; if false, \code{D1} and \code{D2} will be used.}

\item{smoothed.spline}{Whether apply \code{smooth.spline} first?}

\item{show.lgd}{whether show figure lelend?}
}
\description{
\itemize{
\item \code{PhenoTrs} Threshold method
\item \code{PhenoDeriv} Derivative method
\item \code{PhenoGu} Gu method
\item \code{PhenoKl} Inflection method
}
}
\examples{
library(phenofit)
# simulate vegetation time-series
fFUN = doubleLog.Beck
par  = c( mn  = 0.1 , mx  = 0.7 , sos = 50 , rsp = 0.1 , eos = 250, rau = 0.1)

t    <- seq(1, 365, 8)
tout <- seq(1, 365, 1)
y <- fFUN(par, t)

methods <- c("AG", "Beck", "Elmore", "Gu", "Zhang") # "Klos" too slow
fFITs <- curvefit(y, t, tout, methods)
fFIT  <- fFITs$fFIT$AG

par(mfrow = c(2, 2))
PhenoTrs(fFIT)
PhenoDeriv(fFIT)
PhenoGu(fFIT)
PhenoKl(fFIT)
}
