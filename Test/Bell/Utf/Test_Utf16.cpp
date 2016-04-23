//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "../../../Source/Bell/Utf.hpp"

static_assert(Bell::Utf16::isDigit(u'0')	== true , "");
static_assert(Bell::Utf16::isDigit(u'2')	== true , "");
static_assert(Bell::Utf16::isDigit(u'9')	== true , "");
static_assert(Bell::Utf16::isDigit(u'A')	== false, "");
static_assert(Bell::Utf16::isDigit(u'F')	== false, "");
static_assert(Bell::Utf16::isDigit(u'G')	== false, "");
static_assert(Bell::Utf16::isDigit(u'Z')	== false, "");
static_assert(Bell::Utf16::isDigit(u'a')	== false, "");
static_assert(Bell::Utf16::isDigit(u'f')	== false, "");
static_assert(Bell::Utf16::isDigit(u'g')	== false, "");
static_assert(Bell::Utf16::isDigit(u'z')	== false, "");
static_assert(Bell::Utf16::isDigit(u'_')	== false, "");
static_assert(Bell::Utf16::isDigit(u'\0')	== false, "");
static_assert(Bell::Utf16::isDigit(u' ')	== false, "");
static_assert(Bell::Utf16::isDigit(u'\t')	== false, "");

static_assert(Bell::Utf16::isHexDigit(u'0')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'2')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'9')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'A')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'F')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'G')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'Z')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'a')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'f')		== true , "");
static_assert(Bell::Utf16::isHexDigit(u'g')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'z')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'_')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'\0')	== false, "");
static_assert(Bell::Utf16::isHexDigit(u' ')		== false, "");
static_assert(Bell::Utf16::isHexDigit(u'\t')	== false, "");

static_assert(Bell::Utf16::isUpperCase(u'0')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'2')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'9')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'A')	== true , "");
static_assert(Bell::Utf16::isUpperCase(u'F')	== true , "");
static_assert(Bell::Utf16::isUpperCase(u'G')	== true , "");
static_assert(Bell::Utf16::isUpperCase(u'Z')	== true , "");
static_assert(Bell::Utf16::isUpperCase(u'a')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'f')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'g')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'z')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'_')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'\0')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u' ')	== false, "");
static_assert(Bell::Utf16::isUpperCase(u'\t')	== false, "");

static_assert(Bell::Utf16::isLowerCase(u'0')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'2')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'9')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'A')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'F')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'G')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'Z')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'a')	== true , "");
static_assert(Bell::Utf16::isLowerCase(u'f')	== true , "");
static_assert(Bell::Utf16::isLowerCase(u'g')	== true , "");
static_assert(Bell::Utf16::isLowerCase(u'z')	== true , "");
static_assert(Bell::Utf16::isLowerCase(u'_')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'\0')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u' ')	== false, "");
static_assert(Bell::Utf16::isLowerCase(u'\t')	== false, "");

static_assert(Bell::Utf16::isAlphabet(u'0')		== false, "");
static_assert(Bell::Utf16::isAlphabet(u'2')		== false, "");
static_assert(Bell::Utf16::isAlphabet(u'9')		== false, "");
static_assert(Bell::Utf16::isAlphabet(u'A')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'F')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'G')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'Z')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'f')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'a')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'g')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'z')		== true , "");
static_assert(Bell::Utf16::isAlphabet(u'_')		== false, "");
static_assert(Bell::Utf16::isAlphabet(u'\0')	== false, "");
static_assert(Bell::Utf16::isAlphabet(u' ')		== false, "");
static_assert(Bell::Utf16::isAlphabet(u'\t')	== false, "");

static_assert(Bell::Utf16::isAlphabetOrDigit(u'0')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'2')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'9')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'A')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'F')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'G')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'Z')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'f')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'a')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'g')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'z')	== true , "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'_')	== false, "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'\0')	== false, "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u' ')	== false, "");
static_assert(Bell::Utf16::isAlphabetOrDigit(u'\t')	== false, "");

static_assert(Bell::Utf16::isWhiteSpace(u'0')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'2')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'9')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'A')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'F')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'G')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'Z')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'f')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'a')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'g')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'z')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'_')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u'\0')	== false, "");
static_assert(Bell::Utf16::isWhiteSpace(u' ')	== true , "");
static_assert(Bell::Utf16::isWhiteSpace(u'\t')	== true , "");

static_assert(Bell::Utf16::toUpperCase(u'0')	== u'0' , "");
static_assert(Bell::Utf16::toUpperCase(u'2')	== u'2' , "");
static_assert(Bell::Utf16::toUpperCase(u'9')	== u'9' , "");
static_assert(Bell::Utf16::toUpperCase(u'A')	== u'A' , "");
static_assert(Bell::Utf16::toUpperCase(u'F')	== u'F' , "");
static_assert(Bell::Utf16::toUpperCase(u'G')	== u'G' , "");
static_assert(Bell::Utf16::toUpperCase(u'Z')	== u'Z' , "");
static_assert(Bell::Utf16::toUpperCase(u'a')	== u'A' , "");
static_assert(Bell::Utf16::toUpperCase(u'f')	== u'F' , "");
static_assert(Bell::Utf16::toUpperCase(u'g')	== u'G' , "");
static_assert(Bell::Utf16::toUpperCase(u'z')	== u'Z' , "");
static_assert(Bell::Utf16::toUpperCase(u'_')	== u'_' , "");
static_assert(Bell::Utf16::toUpperCase(u'\0')	== u'\0', "");
static_assert(Bell::Utf16::toUpperCase(u' ')	== u' ' , "");
static_assert(Bell::Utf16::toUpperCase(u'\t')	== u'\t', "");

static_assert(Bell::Utf16::toLowerCase(u'0')	== u'0' , "");
static_assert(Bell::Utf16::toLowerCase(u'2')	== u'2' , "");
static_assert(Bell::Utf16::toLowerCase(u'9')	== u'9' , "");
static_assert(Bell::Utf16::toLowerCase(u'A')	== u'a' , "");
static_assert(Bell::Utf16::toLowerCase(u'F')	== u'f' , "");
static_assert(Bell::Utf16::toLowerCase(u'G')	== u'g' , "");
static_assert(Bell::Utf16::toLowerCase(u'Z')	== u'z' , "");
static_assert(Bell::Utf16::toLowerCase(u'a')	== u'a' , "");
static_assert(Bell::Utf16::toLowerCase(u'f')	== u'f' , "");
static_assert(Bell::Utf16::toLowerCase(u'g')	== u'g' , "");
static_assert(Bell::Utf16::toLowerCase(u'z')	== u'z' , "");
static_assert(Bell::Utf16::toLowerCase(u'_')	== u'_' , "");
static_assert(Bell::Utf16::toLowerCase(u'\0')	== u'\0', "");
static_assert(Bell::Utf16::toLowerCase(u' ')	== u' ' , "");
static_assert(Bell::Utf16::toLowerCase(u'\t')	== u'\t', "");
