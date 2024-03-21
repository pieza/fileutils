#include "file_utils.h"
#include <stdio.h>

int read_file(const char *filename, char *buffer, size_t buffer_size) {
  if (buffer_size == 0) {
    buffer_size = DEFAULT_BUFFER_SIZE;
  }
  FILE *file_ptr;
  char ch;
  size_t chars_read = 0;

  file_ptr = fopen(filename, "r");

  if (file_ptr == NULL) {
    printf("Unable to open file.\n");
    return 0;
  }

  // Read character by character until EOF (End Of File) is reached or buffer is
  // full
  while ((ch = fgetc(file_ptr)) != EOF && chars_read < buffer_size - 1) {
    // Store the current character in the buffer
    buffer[chars_read++] = ch;
  }

  buffer[chars_read] = '\0';
  fclose(file_ptr);

  return 1;
}
