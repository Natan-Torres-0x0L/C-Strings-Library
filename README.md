<h1>C Strings Library</h1>

### A support library for strings manipulation

<br><div><img src="images/image.png" width="350" height="82"/></div><br>

# Reference

## Functions that the library provides

- [string_replace](#string_replace)

- [string_readat](#string_readat)

- [string_toreverse](#string_toreverse)
- [string_reverse](#string_reverse)

- [string_split](#string_split)

- [string_length](#string_length)

- [string_repeat](#string_repeat)

- [string_chomp](#string_chomp)
- [string_zero](#string_zero)

- [string_toupper](#string_toupper)
- [string_upper](#string_upper)

- [string_tolower](#string_tolower)
- [string_lower](#string_lower)

- [string_format](#string_format)

- [string_write](#string_write)
- [string_concat](#string_concat)

- [string_compare](#string_compare)
- [string_match](#string_match)
- [string_search](#string_search)
<br>

## Syntax

## string_replace
  > <pre>char *string_replace(const char *source, const char *string, const char *newstring, int nstrings, bool sensitive)</pre>
  Arguments:
   - `source`: the source string
   - `string`: string to be replaced
   - `newstring`: new string that will replace the cases
   - `nstrings`: number of cases to be replaced, if negative all cases
   - `sensitive`: case sensitive search

  Returns:
   - A copy of source string with all cases replaced</p>

## string_readat
  > <pre>char *string_readat(const char *source, char character, bool sensefrom)</pre>
  Arguments:
   - `source`: the source string
   - `character`: delimiter character
   - `sensefrom`: if positive it will travel from the beginning to the end, if negative it will travel from the end to the beginning

  Returns:
   - A new string with all characters before or after the delimiter character
## string_toreverse
  > <pre>char *string_toreverse(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - The source string reversed

## string_reverse
  > <pre>char *string_reverse(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - A copy of source string reversed

## string_split
  > <pre>char **string_split(const char *source, const char *string, bool sensitive)</pre>
  Arguments:
   - `source`: the source string
   - `string`: string that will be used as separator
   - `sensitive`: case sensitive search

  Returns:
   - An array of strings with all splitted parts

## string_length
  > <pre>size_t string_length(const char *)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - The length of the string discarding the null `\0` character

## string_repeat
  > <pre>char *string_repeat(const char *source, size_t times)</pre>
  Arguments:
   - `source`: the source string
   - `times`: number of times to repeat

  Returns
   - A new string containing repetitions of the source string according to the number of times

## string_chomp
  > <pre>char *string_chomp(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - The source string without the last line break sequence(\n) character

## string_zero
  > <pre>char *string_zero(char *source, size_t size)</pre>
  Arguments:
   - `source`: the source string
   - `size`: the size to be cleaned

  Returns:
   - The source string emptied/zeroed

## string_toupper
  > <pre>char *string_toupper(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - The uppercase source string
## string_upper
  > <pre>char *string_upper(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - A copy of the source string in uppercase

## string_tolower
  > <pre>char *string_tolower(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - The lowercase source string
## string_lower
  > <pre>char *string_lower(char *source)</pre>
  Arguments:
   - `source`: the source string

  Returns:
   - A copy of the source string in lowercase

## string_format
  > <pre>char *string_format(const char *fmt, ...)</pre>
  Arguments:
   - `fmt`: a string containing the format to be followed like printf, fprintf, vfprintf...
   - `...`: the arguments that will be formatted

  Returns:
   - A new string formatted according to the arguments passed

## string_write
  > <pre>char *string_write(char *source, const char *string, size_t size)</pre>
  Arguments:
   - `source`: the source string
   - `string`: constant to be written in the source string
   - `size`: the character capacity that the source string supports

  Returns:
   - The source string containing the written constant
## string_concat
  > <pre>char *string_concat(char *source, const char *string, size_t size)</pre>
  Arguments:
   - `source`: the source string
   - `string`: constant to be concaneted with the source string
   - `size`: the character capacity that the source string supports

  Returns:
   - The source string concatenated with the constant

## string_compare
  > <pre>bool string_compare(char *source, const char *string, int size, bool sensitive)</pre>
  Arguments:
   - `source`: the source string
   - `string`: constant to be compared with the source string
   - `size`: number of characters to be compared, if negative, its value is the size of `source`
   - `sensitive`: case sensitive comparison

  Returns:
   - True if the strings are equals or false otherwise

## string_match
  > <pre>bool string_match(char *source, const char *string, bool sensitive)</pre>
  Arguments:
   - `source`: the source string
   - `string`: constant to be matches with the source string
   - `sensitive`: case sensitive matching

  Returns:
   - True if the strings are equals or false otherwise

## string_search
  > <pre>char *string_search(char *source, const char *string, bool sensitive)</pre>
  Arguments:
   - `source`: the source string
   - `string`: constant to be searched in the source string
   - `sensitive`: case sensitive search

  Returns:
   - The part where the constant string starts if found in the source string, otherwise `NULL`
