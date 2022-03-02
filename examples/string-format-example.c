#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  char name[20] = {0};
  char *fstring = NULL;

  printf("What is your name? ");
  scanf("%20[^\n]", name);

  fstring = string_format("Hi, %s!", name);

  puts(fstring);

  free(fstring);

  return 0;
}
