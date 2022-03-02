# C Advanced Strings Library
### Support library for string manipulation for C language


<br><div>
  <!--<img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" width="185" height="200"/>-->
  <img src="image.png" width="350" height="80"/>

</div><br>

# Reference

- **string_replace**
   > <pre>char *string_replace(const char *source, const char *target, const char *new_string, bool sensitive)</pre>
  - Arguments:
    - source: source string
    - target: string to be replaced
    - space: new string space
    - sensitive: case sensitive search
  - Returns:
    - A copy of source string with all cases replaced</p>
- **string_readat**
   > <pre>char *string_readat(const char *source, char character, bool sensefrom)</pre>
  - Arguments:
    - source: source string
    - character: delimiter character
    - sensefrom: if positive it will travel from the beginning to the end, if negative it will travel from the end to the beginning
  - Returns:
    - A new string with all characters before or after the delimiter character
- **string_toreverse**
   > <pre>char *string_toreverse(char *source)</pre>
  - Arguments:
     - source: source string
  - Returns:
    - The source string reversed

- **string_reverse**
   > <pre>char *string_reverse(char *source)</pre>
  - Arguments:
     - source: source string
  - Returns:
    - A copy of souerce string reversed

- **string_split**

- **string_length**
   > <pre>size_t string_length(const char *)</pre>
  - Arguments:
    - source: source string
  - Returns:
    - The length of the string discarding the null character
- **string_repeat**
   > <pre>char *string_repeat(const char *source, size_t times)</pre>
  - Arguments:
    - source: source string
    - times: number of times to repeat
  - Returns
    - A new string containing repetitions of the source string according to the number of times
- **string_chomp**
   > <pre>char *string_chomp(char *source)</pre>
  - Arguments:
    - source: source string
  - Returns:
    - The source string without the last line break sequence
- **string_zero**
   > <pre>char *string_zero(char *source, size_t size)</pre>
  - Arguments:
    - source: source string
    - size: size of the source string
  - Returns:
    - The source string emptied/zeroed
- **string_toupper**
- **string_upper**

- **string_tolower**
- **string_lower**

- **string_format**

- **string_write**
- **string_concat**

- **string_compare**
- **string_match**
- **string_search**

