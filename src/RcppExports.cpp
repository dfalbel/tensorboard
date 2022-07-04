// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tensorboard_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// event_writer
Rcpp::XPtr<EventWriter> event_writer(std::string file);
RcppExport SEXP _tensorboard_event_writer(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(event_writer(file));
    return rcpp_result_gen;
END_RCPP
}
// flush_event_writer
void flush_event_writer(Rcpp::XPtr<EventWriter> writer);
RcppExport SEXP _tensorboard_flush_event_writer(SEXP writerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventWriter> >::type writer(writerSEXP);
    flush_event_writer(writer);
    return R_NilValue;
END_RCPP
}
// write_scalar
bool write_scalar(Rcpp::XPtr<EventWriter> writer, const std::string& name, float data, int64_t step, const std::string& description);
RcppExport SEXP _tensorboard_write_scalar(SEXP writerSEXP, SEXP nameSEXP, SEXP dataSEXP, SEXP stepSEXP, SEXP descriptionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventWriter> >::type writer(writerSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< float >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int64_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type description(descriptionSEXP);
    rcpp_result_gen = Rcpp::wrap(write_scalar(writer, name, data, step, description));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tensorboard_event_writer", (DL_FUNC) &_tensorboard_event_writer, 1},
    {"_tensorboard_flush_event_writer", (DL_FUNC) &_tensorboard_flush_event_writer, 1},
    {"_tensorboard_write_scalar", (DL_FUNC) &_tensorboard_write_scalar, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_tensorboard(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
