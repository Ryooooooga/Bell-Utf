# Utf
UTFエンコーディングの文字種を判定する関数群

# Examples
```cpp
using namespace Bell;

static_assert(Utf8::isDigit(u8'2')           == true , "");
static_assert(Utf8::isAlphabet(u8'a')        == true , "");
static_assert(Utf8::toUpperCase(u8'g')       == u8'G', "");

static_assert(Utf16::isHexDigit(u'f')        == true , "");
static_assert(Utf16::isAlphabetOrDigit(u'a') == true , "");
static_assert(Utf16::toLowerCase(u'E')       == u8'e', "");

static_assert(Utf32::isLowerCase(U'B')       == false, "");
static_assert(Utf32::isUpperCase(U'B')       == true , "");
static_assert(Utf32::isWhitespace(U'\t')     == true , "");
```
これらの関数は全てコンパイル時にも利用出来ます。

# License
Utf is distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).

