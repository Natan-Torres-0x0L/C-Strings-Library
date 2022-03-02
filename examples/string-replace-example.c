#include <strings/strings.h>

#include <stdlib.h>
#include <stdio.h>


int
main(void) {
  const char *string = "Hey! I am a string that will be replaced by another string";

  char *phrase = string_replace(string, "string", "word", -1, true);

  puts(string);
  puts(phrase);

  free(phrase);

  phrase = string_replace(string, "string", "word", 1, true);

  puts(string);
  puts(phrase);

  free(phrase);

  return 0;
}
