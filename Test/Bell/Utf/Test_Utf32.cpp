//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "../../../Source/Bell/Utf.hpp"

static_assert(Bell::Utf32::isDigit(U'0')	== true , "");
static_assert(Bell::Utf32::isDigit(U'2')	== true , "");
static_assert(Bell::Utf32::isDigit(U'9')	== true , "");
static_assert(Bell::Utf32::isDigit(U'A')	== false, "");
static_assert(Bell::Utf32::isDigit(U'F')	== false, "");
static_assert(Bell::Utf32::isDigit(U'G')	== false, "");
static_assert(Bell::Utf32::isDigit(U'Z')	== false, "");
static_assert(Bell::Utf32::isDigit(U'a')	== false, "");
static_assert(Bell::Utf32::isDigit(U'f')	== false, "");
static_assert(Bell::Utf32::isDigit(U'g')	== false, "");
static_assert(Bell::Utf32::isDigit(U'z')	== false, "");
static_assert(Bell::Utf32::isDigit(U'_')	== false, "");
static_assert(Bell::Utf32::isDigit(U'\0')	== false, "");
static_assert(Bell::Utf32::isDigit(U' ')	== false, "");
static_assert(Bell::Utf32::isDigit(U'\t')	== false, "");

static_assert(Bell::Utf32::isHexDigit(U'0')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'2')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'9')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'A')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'F')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'G')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'Z')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'a')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'f')		== true , "");
static_assert(Bell::Utf32::isHexDigit(U'g')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'z')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'_')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'\0')	== false, "");
static_assert(Bell::Utf32::isHexDigit(U' ')		== false, "");
static_assert(Bell::Utf32::isHexDigit(U'\t')	== false, "");

static_assert(Bell::Utf32::isUpperCase(U'0')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'2')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'9')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'A')	== true , "");
static_assert(Bell::Utf32::isUpperCase(U'F')	== true , "");
static_assert(Bell::Utf32::isUpperCase(U'G')	== true , "");
static_assert(Bell::Utf32::isUpperCase(U'Z')	== true , "");
static_assert(Bell::Utf32::isUpperCase(U'a')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'f')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'g')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'z')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'_')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'\0')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U' ')	== false, "");
static_assert(Bell::Utf32::isUpperCase(U'\t')	== false, "");

static_assert(Bell::Utf32::isLowerCase(U'0')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'2')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'9')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'A')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'F')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'G')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'Z')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'a')	== true , "");
static_assert(Bell::Utf32::isLowerCase(U'f')	== true , "");
static_assert(Bell::Utf32::isLowerCase(U'g')	== true , "");
static_assert(Bell::Utf32::isLowerCase(U'z')	== true , "");
static_assert(Bell::Utf32::isLowerCase(U'_')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'\0')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U' ')	== false, "");
static_assert(Bell::Utf32::isLowerCase(U'\t')	== false, "");

static_assert(Bell::Utf32::isAlphabet(U'0')		== false, "");
static_assert(Bell::Utf32::isAlphabet(U'2')		== false, "");
static_assert(Bell::Utf32::isAlphabet(U'9')		== false, "");
static_assert(Bell::Utf32::isAlphabet(U'A')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'F')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'G')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'Z')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'f')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'a')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'g')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'z')		== true , "");
static_assert(Bell::Utf32::isAlphabet(U'_')		== false, "");
static_assert(Bell::Utf32::isAlphabet(U'\0')	== false, "");
static_assert(Bell::Utf32::isAlphabet(U' ')		== false, "");
static_assert(Bell::Utf32::isAlphabet(U'\t')	== false, "");

static_assert(Bell::Utf32::isAlphabetOrDigit(U'0')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'2')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'9')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'A')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'F')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'G')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'Z')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'f')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'a')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'g')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'z')	== true , "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'_')	== false, "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'\0')	== false, "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U' ')	== false, "");
static_assert(Bell::Utf32::isAlphabetOrDigit(U'\t')	== false, "");

static_assert(Bell::Utf32::isWhiteSpace(U'0')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'2')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'9')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'A')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'F')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'G')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'Z')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'f')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'a')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'g')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'z')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'_')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U'\0')	== false, "");
static_assert(Bell::Utf32::isWhiteSpace(U' ')	== true , "");
static_assert(Bell::Utf32::isWhiteSpace(U'\t')	== true , "");

static_assert(Bell::Utf32::toUpperCase(U'0')	== U'0' , "");
static_assert(Bell::Utf32::toUpperCase(U'2')	== U'2' , "");
static_assert(Bell::Utf32::toUpperCase(U'9')	== U'9' , "");
static_assert(Bell::Utf32::toUpperCase(U'A')	== U'A' , "");
static_assert(Bell::Utf32::toUpperCase(U'F')	== U'F' , "");
static_assert(Bell::Utf32::toUpperCase(U'G')	== U'G' , "");
static_assert(Bell::Utf32::toUpperCase(U'Z')	== U'Z' , "");
static_assert(Bell::Utf32::toUpperCase(U'a')	== U'A' , "");
static_assert(Bell::Utf32::toUpperCase(U'f')	== U'F' , "");
static_assert(Bell::Utf32::toUpperCase(U'g')	== U'G' , "");
static_assert(Bell::Utf32::toUpperCase(U'z')	== U'Z' , "");
static_assert(Bell::Utf32::toUpperCase(U'_')	== U'_' , "");
static_assert(Bell::Utf32::toUpperCase(U'\0')	== U'\0', "");
static_assert(Bell::Utf32::toUpperCase(U' ')	== U' ' , "");
static_assert(Bell::Utf32::toUpperCase(U'\t')	== U'\t', "");

static_assert(Bell::Utf32::toLowerCase(U'0')	== U'0' , "");
static_assert(Bell::Utf32::toLowerCase(U'2')	== U'2' , "");
static_assert(Bell::Utf32::toLowerCase(U'9')	== U'9' , "");
static_assert(Bell::Utf32::toLowerCase(U'A')	== U'a' , "");
static_assert(Bell::Utf32::toLowerCase(U'F')	== U'f' , "");
static_assert(Bell::Utf32::toLowerCase(U'G')	== U'g' , "");
static_assert(Bell::Utf32::toLowerCase(U'Z')	== U'z' , "");
static_assert(Bell::Utf32::toLowerCase(U'a')	== U'a' , "");
static_assert(Bell::Utf32::toLowerCase(U'f')	== U'f' , "");
static_assert(Bell::Utf32::toLowerCase(U'g')	== U'g' , "");
static_assert(Bell::Utf32::toLowerCase(U'z')	== U'z' , "");
static_assert(Bell::Utf32::toLowerCase(U'_')	== U'_' , "");
static_assert(Bell::Utf32::toLowerCase(U'\0')	== U'\0', "");
static_assert(Bell::Utf32::toLowerCase(U' ')	== U' ' , "");
static_assert(Bell::Utf32::toLowerCase(U'\t')	== U'\t', "");
