## usethis namespace: start
#' @useDynLib tensorboard, .registration = TRUE
## usethis namespace: end
NULL

## usethis namespace: start
#' @importFrom Rcpp sourceCpp
## usethis namespace: end
NULL

.onUnload <- function (libpath) {
  unload_protobuf()
  library.dynam.unload("tensorboard", libpath)
}
