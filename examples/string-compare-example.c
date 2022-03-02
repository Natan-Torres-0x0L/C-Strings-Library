#include <strings/strings.h>

#include <stdio.h>


int
main(void) {
  const char *stringA = "Hey! i am an example string";
  const char *stringB = "Hey! i am an example";
  const char *stringC = "HeY! I aM aN eXaMpLe";

  if (string_compare(stringA, stringB, 20, true))
    printf("stringA=\"%s\" equals stringB=\"%s\"\r\n", stringA, stringB);

  if (string_compare(stringB, stringC, -1, false))
    printf("stringB=\"%s\" equals stringC=\"%s\" ignoring case sensitive\r\n", stringA, stringC);

  return 0;
}
