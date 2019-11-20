// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// clogistic
void clogistic(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_clogistic(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    clogistic(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_Zhang
void cdoubleLog_Zhang(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_Zhang(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_Zhang(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_AG
void cdoubleLog_AG(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_AG(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_AG(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_Beck
void cdoubleLog_Beck(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_Beck(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_Beck(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_Elmore
void cdoubleLog_Elmore(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_Elmore(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_Elmore(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_Gu
void cdoubleLog_Gu(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_Gu(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_Gu(par, t, pred);
    return R_NilValue;
END_RCPP
}
// cdoubleLog_Klos
void cdoubleLog_Klos(NumericVector par, NumericVector t, NumericVector pred);
RcppExport SEXP _phenofit_cdoubleLog_Klos(SEXP parSEXP, SEXP tSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    cdoubleLog_Klos(par, t, pred);
    return R_NilValue;
END_RCPP
}
// f_goal_cpp
double f_goal_cpp(NumericVector par, Function fun, NumericVector y, NumericVector t, NumericVector ypred, Nullable<NumericVector> w, Nullable<NumericVector> ylu);
RcppExport SEXP _phenofit_f_goal_cpp(SEXP parSEXP, SEXP funSEXP, SEXP ySEXP, SEXP tSEXP, SEXP ypredSEXP, SEXP wSEXP, SEXP yluSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ypred(ypredSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type w(wSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type ylu(yluSEXP);
    rcpp_result_gen = Rcpp::wrap(f_goal_cpp(par, fun, y, t, ypred, w, ylu));
    return rcpp_result_gen;
END_RCPP
}
// check_season
void check_season(DataFrame d, bool rm_closed, double rtrough_max, double r_min);
RcppExport SEXP _phenofit_check_season(SEXP dSEXP, SEXP rm_closedSEXP, SEXP rtrough_maxSEXP, SEXP r_minSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type rm_closed(rm_closedSEXP);
    Rcpp::traits::input_parameter< double >::type rtrough_max(rtrough_maxSEXP);
    Rcpp::traits::input_parameter< double >::type r_min(r_minSEXP);
    check_season(d, rm_closed, rtrough_max, r_min);
    return R_NilValue;
END_RCPP
}
// sgmat_S
arma::mat sgmat_S(int halfwin, int d);
RcppExport SEXP _phenofit_sgmat_S(SEXP halfwinSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_S(halfwin, d));
    return rcpp_result_gen;
END_RCPP
}
// sgmat_B
arma::mat sgmat_B(const arma::mat S);
RcppExport SEXP _phenofit_sgmat_B(SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_B(S));
    return rcpp_result_gen;
END_RCPP
}
// sgmat_wB
arma::mat sgmat_wB(const arma::mat S, const arma::colvec w);
RcppExport SEXP _phenofit_sgmat_wB(SEXP SSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_wB(S, w));
    return rcpp_result_gen;
END_RCPP
}
// smooth_wSG
NumericVector smooth_wSG(const arma::colvec y, int halfwin, int d, Nullable<NumericVector> w);
RcppExport SEXP _phenofit_smooth_wSG(SEXP ySEXP, SEXP halfwinSEXP, SEXP dSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_wSG(y, halfwin, d, w));
    return rcpp_result_gen;
END_RCPP
}
// smooth_SG
Rcpp::NumericVector smooth_SG(const arma::colvec y, const int halfwin, const int d);
RcppExport SEXP _phenofit_smooth_SG(SEXP ySEXP, SEXP halfwinSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< const int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_SG(y, halfwin, d));
    return rcpp_result_gen;
END_RCPP
}
// movmean
NumericVector movmean(const arma::colvec y, int halfwin, bool SG_style, Nullable<NumericVector> w);
RcppExport SEXP _phenofit_movmean(SEXP ySEXP, SEXP halfwinSEXP, SEXP SG_styleSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< bool >::type SG_style(SG_styleSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(movmean(y, halfwin, SG_style, w));
    return rcpp_result_gen;
END_RCPP
}
// wTSM_cpp
NumericVector wTSM_cpp(NumericVector y, NumericVector yfit, NumericVector w, int iter, int nptperyear, double wfact);
RcppExport SEXP _phenofit_wTSM_cpp(SEXP ySEXP, SEXP yfitSEXP, SEXP wSEXP, SEXP iterSEXP, SEXP nptperyearSEXP, SEXP wfactSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yfit(yfitSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type nptperyear(nptperyearSEXP);
    Rcpp::traits::input_parameter< double >::type wfact(wfactSEXP);
    rcpp_result_gen = Rcpp::wrap(wTSM_cpp(y, yfit, w, iter, nptperyear, wfact));
    return rcpp_result_gen;
END_RCPP
}
