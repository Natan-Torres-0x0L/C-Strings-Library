#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char string[14] = {0};

  string_concat(string, "Hello");
  string_concat(string, " ,");
  string_concat(string, "World");
  string_concat(string, "!");

  puts(string);

  return 0;
}
