//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "../../../Source/Bell/Utf.hpp"

static_assert(Bell::Utf8::isDigit(u8'0')	== true , "");
static_assert(Bell::Utf8::isDigit(u8'2')	== true , "");
static_assert(Bell::Utf8::isDigit(u8'9')	== true , "");
static_assert(Bell::Utf8::isDigit(u8'A')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'F')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'G')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'Z')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'a')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'f')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'g')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'z')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'_')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'\0')	== false, "");
static_assert(Bell::Utf8::isDigit(u8' ')	== false, "");
static_assert(Bell::Utf8::isDigit(u8'\t')	== false, "");

static_assert(Bell::Utf8::isHexDigit(u8'0')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'2')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'9')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'A')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'F')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'G')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'Z')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'a')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'f')		== true , "");
static_assert(Bell::Utf8::isHexDigit(u8'g')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'z')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'_')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'\0')	== false, "");
static_assert(Bell::Utf8::isHexDigit(u8' ')		== false, "");
static_assert(Bell::Utf8::isHexDigit(u8'\t')	== false, "");

static_assert(Bell::Utf8::isUpperCase(u8'0')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'2')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'9')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'A')	== true , "");
static_assert(Bell::Utf8::isUpperCase(u8'F')	== true , "");
static_assert(Bell::Utf8::isUpperCase(u8'G')	== true , "");
static_assert(Bell::Utf8::isUpperCase(u8'Z')	== true , "");
static_assert(Bell::Utf8::isUpperCase(u8'a')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'f')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'g')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'z')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'_')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'\0')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8' ')	== false, "");
static_assert(Bell::Utf8::isUpperCase(u8'\t')	== false, "");

static_assert(Bell::Utf8::isLowerCase(u8'0')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'2')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'9')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'A')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'F')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'G')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'Z')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'a')	== true , "");
static_assert(Bell::Utf8::isLowerCase(u8'f')	== true , "");
static_assert(Bell::Utf8::isLowerCase(u8'g')	== true , "");
static_assert(Bell::Utf8::isLowerCase(u8'z')	== true , "");
static_assert(Bell::Utf8::isLowerCase(u8'_')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'\0')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8' ')	== false, "");
static_assert(Bell::Utf8::isLowerCase(u8'\t')	== false, "");

static_assert(Bell::Utf8::isAlphabet(u8'0')		== false, "");
static_assert(Bell::Utf8::isAlphabet(u8'2')		== false, "");
static_assert(Bell::Utf8::isAlphabet(u8'9')		== false, "");
static_assert(Bell::Utf8::isAlphabet(u8'A')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'F')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'G')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'Z')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'f')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'a')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'g')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'z')		== true , "");
static_assert(Bell::Utf8::isAlphabet(u8'_')		== false, "");
static_assert(Bell::Utf8::isAlphabet(u8'\0')	== false, "");
static_assert(Bell::Utf8::isAlphabet(u8' ')		== false, "");
static_assert(Bell::Utf8::isAlphabet(u8'\t')	== false, "");

static_assert(Bell::Utf8::isAlphabetOrDigit(u8'0')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'2')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'9')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'A')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'F')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'G')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'Z')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'f')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'a')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'g')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'z')	== true , "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'_')	== false, "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'\0')	== false, "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8' ')	== false, "");
static_assert(Bell::Utf8::isAlphabetOrDigit(u8'\t')	== false, "");

static_assert(Bell::Utf8::isWhiteSpace(u8'0')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'2')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'9')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'A')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'F')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'G')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'Z')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'f')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'a')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'g')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'z')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'_')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8'\0')	== false, "");
static_assert(Bell::Utf8::isWhiteSpace(u8' ')	== true , "");
static_assert(Bell::Utf8::isWhiteSpace(u8'\t')	== true , "");

static_assert(Bell::Utf8::toUpperCase(u8'0')	== u8'0' , "");
static_assert(Bell::Utf8::toUpperCase(u8'2')	== u8'2' , "");
static_assert(Bell::Utf8::toUpperCase(u8'9')	== u8'9' , "");
static_assert(Bell::Utf8::toUpperCase(u8'A')	== u8'A' , "");
static_assert(Bell::Utf8::toUpperCase(u8'F')	== u8'F' , "");
static_assert(Bell::Utf8::toUpperCase(u8'G')	== u8'G' , "");
static_assert(Bell::Utf8::toUpperCase(u8'Z')	== u8'Z' , "");
static_assert(Bell::Utf8::toUpperCase(u8'a')	== u8'A' , "");
static_assert(Bell::Utf8::toUpperCase(u8'f')	== u8'F' , "");
static_assert(Bell::Utf8::toUpperCase(u8'g')	== u8'G' , "");
static_assert(Bell::Utf8::toUpperCase(u8'z')	== u8'Z' , "");
static_assert(Bell::Utf8::toUpperCase(u8'_')	== u8'_' , "");
static_assert(Bell::Utf8::toUpperCase(u8'\0')	== u8'\0', "");
static_assert(Bell::Utf8::toUpperCase(u8' ')	== u8' ' , "");
static_assert(Bell::Utf8::toUpperCase(u8'\t')	== u8'\t', "");

static_assert(Bell::Utf8::toLowerCase(u8'0')	== u8'0' , "");
static_assert(Bell::Utf8::toLowerCase(u8'2')	== u8'2' , "");
static_assert(Bell::Utf8::toLowerCase(u8'9')	== u8'9' , "");
static_assert(Bell::Utf8::toLowerCase(u8'A')	== u8'a' , "");
static_assert(Bell::Utf8::toLowerCase(u8'F')	== u8'f' , "");
static_assert(Bell::Utf8::toLowerCase(u8'G')	== u8'g' , "");
static_assert(Bell::Utf8::toLowerCase(u8'Z')	== u8'z' , "");
static_assert(Bell::Utf8::toLowerCase(u8'a')	== u8'a' , "");
static_assert(Bell::Utf8::toLowerCase(u8'f')	== u8'f' , "");
static_assert(Bell::Utf8::toLowerCase(u8'g')	== u8'g' , "");
static_assert(Bell::Utf8::toLowerCase(u8'z')	== u8'z' , "");
static_assert(Bell::Utf8::toLowerCase(u8'_')	== u8'_' , "");
static_assert(Bell::Utf8::toLowerCase(u8'\0')	== u8'\0', "");
static_assert(Bell::Utf8::toLowerCase(u8' ')	== u8' ' , "");
static_assert(Bell::Utf8::toLowerCase(u8'\t')	== u8'\t', "");
