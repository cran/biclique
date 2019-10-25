/* 
 * R wrapper of Biclique Enumerator
 *
 * Author: Yuping Lu, yupinglu@utk.edu
 * Created: September 2016
 *
 * Copyright 2016-2019
 * Department of Computer Science, University of Tennessee, Knoxville
 *
 * Last modified: August 2017
 *
 */

#ifndef __R_BICLIQUE_DRIVER__
#define __R_BICLIQUE_DRIVER__

#include <R.h>
#include <Rinternals.h>

#include <string.h>
#include "bit.h"
#include "bigraph.h"
#include "utility.h"
#include "biclique.h"

#define CHARPT(x,i)  ((char*)CHAR(STRING_ELT(x,i)))
#define newRptr(ptr,Rptr,fin) PROTECT(Rptr = R_MakeExternalPtr(ptr, R_NilValue, R_NilValue)); R_RegisterCFinalizerEx(Rptr, fin, TRUE)
/* newRptr(already_allocated_C_pointer, R_pointer_to_be_made_for_it, finalizer) */

void maximal_biclique(BiGraph *G, num_t *profile, num_t **g_right, num_t **g_left);

SEXP copy_data (SEXP C_data);
SEXP R_biclique(SEXP R_file, SEXP R_left_least, SEXP R_right_least, SEXP R_degree, SEXP R_version, SEXP R_print, SEXP R_input);

#endif
