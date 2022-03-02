#include <strings/strings.h>

#include <stdlib.h>
#include <stdio.h>


int
main(void) {
  char *r = string_repeat("Natan", 2);

  puts(r);

  free(r);

  return 0;
}
