#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char string[14] = "HELLO, WORLD!";

  char *string_copy = string_lower(string);

  puts(string_copy);
  puts(string);

  free(string_copy);

  puts(string_tolower(string));

  return 0;
}
