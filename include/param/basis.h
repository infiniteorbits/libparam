/*
 * basis.h
 *
 *  Created on: Oct 5, 2016
 *      Author: johan
 */

#ifndef LIBPARAM_SETS_BASIS_H_
#define LIBPARAM_SETS_BASIS_H_

#include <vmem/vmem.h>

extern vmem_t * vmem_basis;

typedef struct {
	param_t boot_count;
	param_t boot_alt;
	param_t csp_node;
	param_t csp_can_speed;
	param_t csp_rtable;
} basis_param_t;

extern basis_param_t basis_param;

#endif /* LIBPARAM_SETS_BASIS_H_ */
