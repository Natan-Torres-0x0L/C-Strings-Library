#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char message[14] = "Hello, World!";

  puts(message);

  string_zero(message, sizeof(message));

  puts(message);

  return 0;
}
