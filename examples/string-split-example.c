#include <strings/strings.h>

#include <stdlib.h>
#include <stdio.h>


static inline void
print_array(char **langs) {
  char **langsL = langs;
  while (*langsL) {
    const char *lang = (const char *)*langsL;
    puts(lang);

    free(*langsL++);
  }

  free(langs);
}

int
main(void) {
  const char *string = "C, C++, C#, Go, Perl, Lua";

  char **langs = string_split(string, ", ", true);

  print_array(langs);

  return 0;
}
