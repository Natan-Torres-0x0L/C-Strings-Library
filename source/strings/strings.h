#ifndef _STRINGS_STRINGS_H
#define _STRINGS_STRINGS_H


#if defined __cplusplus
extern "C" {
#endif


#include <stdbool.h>
#include <stddef.h>


extern char *string_replace(const char *, const char *, const char *, int, bool);

extern char *string_readat(const char *, char, bool);

extern char *string_toreverse(char *);
extern char *string_reverse(const char *);

extern char **string_split(const char *, const char *, bool);

extern size_t string_length(const char *);

extern char *string_repeat(const char *, size_t);

extern char *string_chomp(char *);
extern char *string_zero(char *, size_t);

extern char *string_toupper(char *);
extern char *string_upper(const char *);

extern char *string_tolower(char *);
extern char *string_lower(const char *);

extern char *string_format(const char *, ...);

extern char *string_write(char *, const char *, size_t);
extern char *string_concat(char *, const char *, size_t);

extern bool string_compare(const char *, const char *, int, bool);
extern bool string_match(const char *, const char *, bool);
extern char *string_search(const char *, const char *, bool);

#if defined __cplusplus
}
#endif


#endif
