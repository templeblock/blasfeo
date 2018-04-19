/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016-2017 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* BLASFEO is free software; you can redistribute it and/or                                        *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* BLASFEO is distributed in the hope that it will be useful,                                      *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with BLASFEO; if not, write to the Free Software                                  *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                          gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

/*
 * blas3 functions for LA:REFERENCE (column major)
 *
 * blas/d_blas_lib*.c
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "../include/blasfeo_common.h"
#include "../include/blasfeo_d_aux.h"
#include "../include/blasfeo_d_aux.h"


#define REAL double
#define STRMAT blasfeo_dmat_ref
#define STRVEC blasfeo_dvec_ref

#define GEMM_NN_LIBSTR    blasfeo_dgemm_nn_ref
#define GEMM_NT_LIBSTR    blasfeo_dgemm_nt_ref

#define SYRK_LN_LIBSTR    blasfeo_dsyrk_ln_ref
#define SYRK_LN_MN_LIBSTR blasfeo_dsyrk_ln_mn_ref

#define TRSM_LLNU_LIBSTR  blasfeo_dtrsm_llnu_ref
#define TRSM_LUNN_LIBSTR  blasfeo_dtrsm_lunn_ref
#define TRSM_RLTU_LIBSTR  blasfeo_dtrsm_rltu_ref
#define TRSM_RLTN_LIBSTR  blasfeo_dtrsm_rltn_ref
#define TRSM_RUTN_LIBSTR  blasfeo_dtrsm_rutn_ref
#define TRMM_RUTN_LIBSTR  blasfeo_dtrmm_rutn_ref
#define TRMM_RLNN_LIBSTR  blasfeo_dtrmm_rlnn_ref

#define COPY dcopy_
#define GEMM dgemm_
#define SYRK dsyrk_
#define TRMM dtrmm_
#define TRSM dtrsm_


// TESTING_MODE
#include "x_blas3_lib.c"
