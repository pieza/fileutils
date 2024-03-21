#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <stdio.h>

#define DEFAULT_BUFFER_SIZE 1024

int read_file(const char *filename, char *buffer, size_t buffer_size);

#endif /* FILE_UTILS_H */
