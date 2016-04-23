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
	struct Utf<char>
	{
		using Type = char;

		//	[0-9]
		constexpr static bool isDigit(char c)
		{
			return u8'0' <= c && c <= u8'9';
		}

		//	[0-9A-Fa-f]
		constexpr static bool isHexDigit(char c)
		{
			return isDigit(c) || (u8'A' <= c && c <= u8'F') || (u8'a' <= c && c <= u8'f');
		}

		//	[A-Z]
		constexpr static bool isUpperCase(char c)
		{
			return u8'A' <= c && c <= u8'Z';
		}

		//	[a-z]
		constexpr static bool isLowerCase(char c)
		{
			return u8'a' <= c && c <= u8'z';
		}

		//	[A-Za-z]
		constexpr static bool isAlphabet(char c)
		{
			return isUpperCase(c) || isLowerCase(c);
		}

		//	[0-9A-Za-z]
		constexpr static bool isAlphabetOrDigit(char c)
		{
			return isAlphabet(c) || isDigit(c);
		}

		//	\s
		constexpr static bool isWhiteSpace(char c)
		{
			return	c == u8' '	||	//	半角スペース
					c == u8'\r'	||
					c == u8'\n'	||
					c == u8'\t'	||
					c == u8'\v'	||
					c == u8'\f';
		}

		//	[a-z] => [A-Z]
		constexpr static char toUpperCase(char c)
		{
			return isLowerCase(c) ? c - u8'a' + u8'A' : c;
		}

		//	[a-z] => [A-Z]
		constexpr static char toLowerCase(char c)
		{
			return isUpperCase(c) ? c - u8'A' + u8'a' : c;
		}
	};

}}	//	namespace Bell::Utf
