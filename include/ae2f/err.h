#if !defined(ae2f_err_h)
// Those numbers with [ae2f_err_t] will be the state.
#define ae2f_err_h

#include <stdint.h>
#include <ae2f/errGlob.h>
#include <ae2f/Call.h>
#include <ae2f/Cast.h>

/// @brief
/// # For C++ Deconstructors
/// 
/// When the end of the lifecycle for C++ objects builtins, the error code will stored here.
ae2f_extern ae2f_SHAREDCALL ae2f_err_t ae2f_errLast;

#endif