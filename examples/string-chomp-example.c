#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char string[100] = "Hey! I am a string with a line break\n";

  puts(string);

  string_chomp(string);

  puts(string);

  return 0;
}
