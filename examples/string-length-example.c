#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  const char *string = "Hey! am an example string";

  printf("%u\r\n", string_length(string));

  return 0;
}
