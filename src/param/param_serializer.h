/*
 * param_serializer.h
 *
 *  Created on: Sep 28, 2016
 *      Author: johan
 */

#ifndef SRC_PARAM_PARAM_SERIALIZER_H_
#define SRC_PARAM_PARAM_SERIALIZER_H_

#include <param/param.h>
#include <csp/csp.h>
#include <mpack/mpack.h>

void param_serialize_id(mpack_writer_t *writer, param_t * param, int offset);
void param_deserialize_id(mpack_reader_t *reader, int *id, int *node, int *offset);

int param_serialize_to_mpack(param_t * param, int offset, mpack_writer_t * writer, void * value);
void param_deserialize_from_mpack_to_param(void * context, void * queue, param_t * param, int offset, mpack_reader_t * reader);

#endif /* SRC_PARAM_PARAM_SERIALIZER_H_ */
