#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char string[14] = {0};

  string_write(string, "Hello, World!", sizeof(string));

  puts(string);

  return 0;
}
