//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

namespace Bell { namespace Utf_ {

	template <>
	struct Utf<char32_t>
	{
		using Type = char32_t;

		//	[0-9]
		constexpr static bool isDigit(char32_t c)
		{
			return U'0' <= c && c <= U'9';
		}

		//	[0-9A-Fa-f]
		constexpr static bool isHexDigit(char32_t c)
		{
			return isDigit(c) || (U'A' <= c && c <= U'F') || (U'a' <= c && c <= U'f');
		}

		//	[A-Z]
		constexpr static bool isUpperCase(char32_t c)
		{
			return U'A' <= c && c <= U'Z';
		}

		//	[a-z]
		constexpr static bool isLowerCase(char32_t c)
		{
			return U'a' <= c && c <= U'z';
		}

		//	[A-Za-z]
		constexpr static bool isAlphabet(char32_t c)
		{
			return isUpperCase(c) || isLowerCase(c);
		}

		//	[0-9A-Za-z]
		constexpr static bool isAlphabetOrDigit(char32_t c)
		{
			return isAlphabet(c) || isDigit(c);
		}

		//	\s
		constexpr static bool isWhiteSpace(char32_t c)
		{
			return	c == U' '		||	//	半角スペース
					c == U'　'		||	//	全角スペース
					c == U'\u00a0'	||	//	nbsp
					c == U'\r'		||
					c == U'\n'		||
					c == U'\t'		||
					c == U'\v'		||
					c == U'\f';
		}

		//	[a-z] => [A-Z]
		constexpr static char32_t toUpperCase(char32_t c)
		{
			return isLowerCase(c) ? c - U'a' + U'A' : c;
		}

		//	[a-z] => [A-Z]
		constexpr static char32_t toLowerCase(char32_t c)
		{
			return isUpperCase(c) ? c - U'A' + U'a' : c;
		}
	};

}}	//	namespace Bell::Utf
