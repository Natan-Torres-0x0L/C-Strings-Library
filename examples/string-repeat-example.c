#include <strings/strings.h>

#include <stdlib.h>
#include <stdio.h>


int
main(void) {
  char *string = "Hey! I am the string that will be repeated\r\n";

  char *strings = string_repeat(string, 10);

  puts(strings);

  free(strings);

  return 0;
}
