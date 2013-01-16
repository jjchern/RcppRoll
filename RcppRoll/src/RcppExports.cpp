// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// roll_max_numeric_vector
NumericVector roll_max_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_max_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_max_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_max_numeric_matrix
NumericMatrix roll_max_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_max_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_max_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_mean_numeric_vector
NumericVector roll_mean_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_mean_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_mean_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_mean_numeric_matrix
NumericMatrix roll_mean_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_mean_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_mean_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_median_numeric_vector
NumericVector roll_median_numeric_vector(NumericVector x_, int n);
RcppExport SEXP RcppRoll_roll_median_numeric_vector(SEXP x_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x_ = Rcpp::as<NumericVector >(x_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_median_numeric_vector(x_, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_median_numeric_matrix
NumericMatrix roll_median_numeric_matrix(NumericMatrix A_, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_median_numeric_matrix(SEXP A_SEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A_ = Rcpp::as<NumericMatrix >(A_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_median_numeric_matrix(A_, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_min_numeric_vector
NumericVector roll_min_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_min_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_min_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_min_numeric_matrix
NumericMatrix roll_min_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_min_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_min_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_prod_numeric_vector
NumericVector roll_prod_numeric_vector(NumericVector x_, int n);
RcppExport SEXP RcppRoll_roll_prod_numeric_vector(SEXP x_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x_ = Rcpp::as<NumericVector >(x_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_prod_numeric_vector(x_, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_prod_numeric_matrix
NumericMatrix roll_prod_numeric_matrix(NumericMatrix A_, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_prod_numeric_matrix(SEXP A_SEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A_ = Rcpp::as<NumericMatrix >(A_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_prod_numeric_matrix(A_, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_sd_numeric_vector
NumericVector roll_sd_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_sd_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_sd_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_sd_numeric_matrix
NumericMatrix roll_sd_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_sd_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_sd_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_stddev_numeric_vector
NumericVector roll_stddev_numeric_vector(NumericVector x_, int n);
RcppExport SEXP RcppRoll_roll_stddev_numeric_vector(SEXP x_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x_ = Rcpp::as<NumericVector >(x_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_stddev_numeric_vector(x_, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_stddev_numeric_matrix
NumericMatrix roll_stddev_numeric_matrix(NumericMatrix A_, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_stddev_numeric_matrix(SEXP A_SEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A_ = Rcpp::as<NumericMatrix >(A_SEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_stddev_numeric_matrix(A_, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_sum_numeric_vector
NumericVector roll_sum_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_sum_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_sum_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_sum_numeric_matrix
NumericMatrix roll_sum_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_sum_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_sum_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_var_numeric_vector
NumericVector roll_var_numeric_vector(NumericVector x, int n);
RcppExport SEXP RcppRoll_roll_var_numeric_vector(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    int n = Rcpp::as<int >(nSEXP);
    NumericVector __result = roll_var_numeric_vector(x, n);
    return Rcpp::wrap(__result);
END_RCPP
}
// roll_var_numeric_matrix
NumericMatrix roll_var_numeric_matrix(NumericMatrix A, int n, bool by_column);
RcppExport SEXP RcppRoll_roll_var_numeric_matrix(SEXP ASEXP, SEXP nSEXP, SEXP by_columnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix A = Rcpp::as<NumericMatrix >(ASEXP);
    int n = Rcpp::as<int >(nSEXP);
    bool by_column = Rcpp::as<bool >(by_columnSEXP);
    NumericMatrix __result = roll_var_numeric_matrix(A, n, by_column);
    return Rcpp::wrap(__result);
END_RCPP
}
