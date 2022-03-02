#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char string[14] = "hello, world!";

  char *string_copy = string_upper(string);

  puts(string_copy);
  puts(string);

  free(string_copy);

  puts(string_toupper(string));

  return 0;
}
