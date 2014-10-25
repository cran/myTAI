// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_TAI
NumericVector cpp_TAI(NumericMatrix ExpressionSet, NumericVector Phylostratum);
RcppExport SEXP myTAI_cpp_TAI(SEXP ExpressionSetSEXP, SEXP PhylostratumSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type ExpressionSet(ExpressionSetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type Phylostratum(PhylostratumSEXP );
        NumericVector __result = cpp_TAI(ExpressionSet, Phylostratum);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_bootMatrix
NumericMatrix cpp_bootMatrix(NumericMatrix ExpressionMatrix, NumericVector AgeVector, int permutations);
RcppExport SEXP myTAI_cpp_bootMatrix(SEXP ExpressionMatrixSEXP, SEXP AgeVectorSEXP, SEXP permutationsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type ExpressionMatrix(ExpressionMatrixSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type AgeVector(AgeVectorSEXP );
        Rcpp::traits::input_parameter< int >::type permutations(permutationsSEXP );
        NumericMatrix __result = cpp_bootMatrix(ExpressionMatrix, AgeVector, permutations);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_pMatrix
NumericMatrix cpp_pMatrix(NumericMatrix ExpressionSet, NumericVector AgeVector);
RcppExport SEXP myTAI_cpp_pMatrix(SEXP ExpressionSetSEXP, SEXP AgeVectorSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type ExpressionSet(ExpressionSetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type AgeVector(AgeVectorSEXP );
        NumericMatrix __result = cpp_pMatrix(ExpressionSet, AgeVector);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_std_error
double cpp_std_error(NumericVector x);
RcppExport SEXP myTAI_cpp_std_error(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        double __result = cpp_std_error(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_geom_mean
double cpp_geom_mean(NumericVector x);
RcppExport SEXP myTAI_cpp_geom_mean(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        double __result = cpp_geom_mean(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_omitMatrix
NumericMatrix cpp_omitMatrix(NumericMatrix ExpressionSet, NumericVector AgeVector);
RcppExport SEXP myTAI_cpp_omitMatrix(SEXP ExpressionSetSEXP, SEXP AgeVectorSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type ExpressionSet(ExpressionSetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type AgeVector(AgeVectorSEXP );
        NumericMatrix __result = cpp_omitMatrix(ExpressionSet, AgeVector);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}