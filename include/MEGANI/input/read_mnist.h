#ifndef _READ_MNIST_H_
#define _READ_MNIST_H_

#include "mx_iterator.h"

mx_iterator read_idx3(const char *filename, mx_size batch_len, uint8_t vertical);

#endif