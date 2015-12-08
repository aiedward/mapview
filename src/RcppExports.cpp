// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gsubC
std::string gsubC(const std::string& pattern, const std::string& replacement, std::string x);
RcppExport SEXP mapview_gsubC(SEXP patternSEXP, SEXP replacementSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type pattern(patternSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type replacement(replacementSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    __result = Rcpp::wrap(gsubC(pattern, replacement, x));
    return __result;
END_RCPP
}
// brewPopupRowC
std::string brewPopupRowC(std::string colname, std::string value);
RcppExport SEXP mapview_brewPopupRowC(SEXP colnameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type colname(colnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    __result = Rcpp::wrap(brewPopupRowC(colname, value));
    return __result;
END_RCPP
}
// brewPopupRowAltC
std::string brewPopupRowAltC(std::string colname, std::string value);
RcppExport SEXP mapview_brewPopupRowAltC(SEXP colnameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type colname(colnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    __result = Rcpp::wrap(brewPopupRowAltC(colname, value));
    return __result;
END_RCPP
}
// mergePopupRows
std::string mergePopupRows(CharacterVector names, CharacterVector values);
RcppExport SEXP mapview_mergePopupRows(SEXP namesSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type values(valuesSEXP);
    __result = Rcpp::wrap(mergePopupRows(names, values));
    return __result;
END_RCPP
}
// createTemplate
std::string createTemplate(std::string tmpPath);
RcppExport SEXP mapview_createTemplate(SEXP tmpPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type tmpPath(tmpPathSEXP);
    __result = Rcpp::wrap(createTemplate(tmpPath));
    return __result;
END_RCPP
}
// listPopupTemplates
List listPopupTemplates(CharacterMatrix x, CharacterVector names, std::string tmpPath);
RcppExport SEXP mapview_listPopupTemplates(SEXP xSEXP, SEXP namesSEXP, SEXP tmpPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< std::string >::type tmpPath(tmpPathSEXP);
    __result = Rcpp::wrap(listPopupTemplates(x, names, tmpPath));
    return __result;
END_RCPP
}
// df2String
CharacterMatrix df2String(DataFrame x);
RcppExport SEXP mapview_df2String(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    __result = Rcpp::wrap(df2String(x));
    return __result;
END_RCPP
}
// one2JSON
std::string one2JSON(CharacterVector x);
RcppExport SEXP mapview_one2JSON(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(one2JSON(x));
    return __result;
END_RCPP
}
// all2JSONlist
List all2JSONlist(CharacterMatrix x);
RcppExport SEXP mapview_all2JSONlist(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(all2JSONlist(x));
    return __result;
END_RCPP
}