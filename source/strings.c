#include "strings.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


char *
string_replace(const char *source, const char *target, const char *space, bool sensitive) {
  size_t matches = 0, size;

  char *stringA = (char *)source;
  char *stringB = NULL;
  char *stringC = NULL;
  char *stringD = NULL;
  char *stringX = NULL;
  char *stringZ = NULL;

  for (; (stringB = string_search(stringA, target, sensitive)); matches++)
    stringA = stringB+1;

  stringA = (char *)source;

  size = (string_length(source)-(string_length(target)*matches))+(string_length(space)*matches);
  if (!(stringZ = (char *)calloc(size+1, sizeof(char))))
    return NULL;
  stringX = stringZ;

  while (matches) {
    stringB = stringA, stringC = (char *)target;

    if (!sensitive)
      while (*stringB && *stringC && (*stringB >= 'a' && *stringB <= 'z' ? *stringB-('a'-'A') : *stringB) == (*stringC >= 'a' && *stringC <= 'z' ? *stringC-('a'-'A') : *stringC))
        stringB++, stringC++;
    else
      while (*stringB && *stringC && *stringB == *stringC)
        stringB++, stringC++;

    if (!*stringC) {
      stringD = (char *)space;

      while (*stringD)
        *stringX++ = *stringD++;

      if ((--matches) != 0) {
        stringA += string_length(target);
        continue;
      }

      while (*stringB)
        *stringX++ = *stringB++;

      return stringZ;
    }
    *stringX++ = *stringA++;
  }

  return (char *)source;
}

char *
string_readat(const char *source, char character, bool sensefrom) {
  size_t size = 0;

  char *stringA = (char *)((sensefrom) ? source : source+string_length(source)-1);
  char *stringB = (char *)((sensefrom) ? source : source+string_length(source)-1);
  char *stringX = NULL;
  char *stringZ = NULL;

  for (; *stringA && *stringA != character; size++)
    stringA = (sensefrom ? stringA+1 : stringA-1);

  if (*stringA != character)
    return NULL;

  if (!(stringZ = (char *)calloc(size+1, sizeof(char))))
    return NULL;
  stringX = (sensefrom ? stringZ : stringZ+size-1);

  while (*stringB && *stringB != character) {
    if (sensefrom)
      *stringX++ = *stringB;
    else
      *stringX-- = *stringB;

    stringB = (sensefrom ? stringB+1 : stringB-1);
  }

  return stringZ;
}

char *
string_toreverse(char *source) {
  char character;

  char *stringA = source+string_length(source)-1;
  char *stringB = source;

  while (stringB < stringA)
    character = *stringB, *stringB++ = *stringA, *stringA-- = character;

  return source;
}

char *
string_reverse(const char *source) {
  size_t size = string_length(source);

  const char *stringA = source+string_length(source)-1;
  char *stringZ = NULL;
  char *stringX = NULL;

  if (!(stringZ = (char *)calloc(string_length(source)+1, sizeof(char))))
    return NULL;
  stringX = stringZ;

  while (size-- > 0)
    *stringX++ = *stringA--;

  return stringZ;
}

char **
string_split(const char *source, const char *target, bool sensitive) {
  size_t strings = 0, size = 0;

  bool measured = false;

  char *stringA = NULL;
  char *stringB = (char *)source;
  char *stringC = NULL;
  char *stringD = NULL;
  char *stringX = NULL;
  char **stringZ = NULL;

  for (; (stringA = string_search(stringB, target, sensitive)); size++)
    stringB = stringA+string_length(target);

  if (!(stringZ = (char **)calloc(++size+1, sizeof(char *))))
    return NULL;

  stringA = (char *)source;
  stringB = (char *)source;

  size = 0;

  while (true) {
    stringC = (measured ? stringB : stringA), stringD = (char *)target;

    if (!sensitive)
      while (*stringC && *stringD && (*stringC >= 'a' && *stringC <= 'z' ? *stringC-('a'-'A') : *stringC) == (*stringD >= 'a' && *stringD <= 'z' ? *stringD-('a'-'A') : *stringD))
        stringC++, stringD++;
    else
      while (*stringC && *stringD && *stringC == *stringD)
        stringC++, stringD++;

    if (!*stringC || !*stringD) {
      if (measured) {
        stringB += string_length(target), measured = false;
        if (!*stringC)
          break;
      }
      else {
        if (!(stringZ[strings] = (char *)calloc(size+1, sizeof(char))))
          return stringZ;
        stringX = stringZ[strings];

        strings++, size = 0, measured = true;
        stringA += string_length(target);

        continue;
      }
    }

    if (measured)
      *stringX++ = *stringB++;
    else
      stringA++, size++;
  }

  return stringZ;
}

size_t
string_length(const char *source) {
  const char *stringA = source;

  while (*stringA++);

  return (size_t)(stringA-source-1);
}

char *
string_chomp(char *source) {
  char *stringA = source+string_length(source)-1;

  while (*stringA && *stringA != '\n')
    stringA--;
  while (*stringA)
    *stringA++ = '\0';

  return source;
}

char *
string_zero(char *source, size_t size) {
  char *stringA = source;

  while (size && (*stringA++ = '\0'))
    size--;

  return stringA;
}

char *
string_toupper(char *source) {
  char *stringA = source;

  while (*stringA) {
    *stringA = (char)(*stringA >= 'a' && *stringA <= 'z' ? *stringA-('a'-'A') : *stringA);
    stringA++;
  }

  return source;
}

char *
string_upper(const char *source) {
  const char *stringA = source;
  char *stringZ = NULL;
  char *stringX = NULL;

  if (!(stringZ = (char *)calloc(string_length(source)+1, sizeof(char))))
    return NULL;
  stringX = stringZ;

  while (*stringA) {
    *stringX++ = (char)(*stringA >= 'a' && *stringA <= 'z' ? *stringA-('a'-'A') : *stringA);
    stringA++;
  }

  return stringZ;
}

char *
string_tolower(char *source) {
  char *stringA = source;

  while (*stringA) {
    *stringA = (char)(*stringA >= 'A' && *stringA <= 'Z' ? *stringA+('a'-'A') : *stringA);
    stringA++;
  }

  return source;
}

char *
string_lower(const char *source) {
  const char *stringA = source;
  char *stringZ = NULL;
  char *stringX = NULL;

  if (!(stringZ = (char *)calloc(string_length(source)+1, sizeof(char))))
    return NULL;
  stringX = stringZ;

  while (*stringA) {
    *stringX++ = (char)(*stringA >= 'A' && *stringA <= 'Z' ? *stringA+('a'-'A') : *stringA);
    stringA++;
  }

  return stringZ;
}

char *
string_format(const char *fmt, ...) {
  char *stringZ = NULL;

  int vfmt;
  va_list va_args;

  va_start(va_args, fmt);

  if ((vfmt = vsnprintf(NULL, 0, fmt, va_args)) < 0)
    return NULL;

  va_end(va_args);

  if (!(stringZ = (char *)calloc((size_t)vfmt+1, sizeof(char))))
    return NULL;

  va_start(va_args, fmt);

  if (vsprintf(stringZ, fmt, va_args) < 0)
    free(stringZ), stringZ = NULL;

  va_end(va_args);

  return stringZ;
}

char *
string_write(char *source, const char *string, size_t size) {
  char *stringA = source;

  while (size && (*stringA++ = *string++))
    size--;
  while (size--)
    *stringA++ = '\0';

  return source;
}

char *
string_concat(char *source, const char *string, size_t size) {
  char *stringA = source;

  while (*stringA++);
  stringA--;

  while (size--)
    if (!(*stringA++ = *string++))
      return stringA;

  *stringA = '\0';

  return source;
}

bool
string_compare(const char *source, const char *string, size_t size, bool sensitive) {
  const char *stringA = source;
  const char *stringB = string;

  if (!sensitive)
    while (size && *stringA && *stringB && (*stringA >= 'a' && *stringA <= 'z' ? *stringA-('a'-'A') : *stringA) == (*stringB >= 'a' && *stringB <= 'z' ? *stringB-('a'-'A') : *stringB))
      stringA++, stringB++, --size;
  else
    while (size && *stringA && *stringB && *stringA == *stringB)
      stringA++, stringB++, --size;

  return !size;
}

bool
string_match(const char *source, const char *string, bool sensitive) {
  const char *stringA = source;
  const char *stringB = string;

  if (!sensitive)
    while (*stringA && *stringB && (*stringA >= 'a' && *stringA <= 'z' ? *stringA-('a'-'A') : *stringA) == (*stringB >= 'a' && *stringB <= 'z' ? *stringB-('a'-'A') : *stringB))
      stringA++, stringB++;
  else
    while (*stringA && *stringB && *stringA == *stringB)
      stringA++, stringB++;

  return !*stringA && !*stringB;
}

char *
string_search(const char *source, const char *string, bool sensitive) {
  char *stringA = (char *)source;
  char *stringB = NULL;
  char *stringC = NULL;

  while (*stringA) {
    stringC = (char *)string, stringB = (char *)stringA;

    if (!sensitive)
      while (*stringB && *stringC && (*stringB >= 'a' && *stringB <= 'z' ? *stringB-('a'-'A') : *stringB) == (*stringC >= 'a' && *stringC <= 'z' ? *stringC-('a'-'A') : *stringC))
        stringB++, stringC++;
    else
      while (*stringB && *stringC && *stringB == *stringC)
        stringB++, stringC++;

    if (!*stringC)
      return stringA;

    stringA++;
  }

  return NULL;
}
