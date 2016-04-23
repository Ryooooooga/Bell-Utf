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
	struct Utf<char16_t>
	{
		using Type = char16_t;

		//	[0-9]
		constexpr static bool isDigit(char16_t c)
		{
			return u'0' <= c && c <= u'9';
		}

		//	[0-9A-Fa-f]
		constexpr static bool isHexDigit(char16_t c)
		{
			return isDigit(c) || (u'A' <= c && c <= u'F') || (u'a' <= c && c <= u'f');
		}

		//	[A-Z]
		constexpr static bool isUpperCase(char16_t c)
		{
			return u'A' <= c && c <= u'Z';
		}

		//	[a-z]
		constexpr static bool isLowerCase(char16_t c)
		{
			return u'a' <= c && c <= u'z';
		}

		//	[A-Za-z]
		constexpr static bool isAlphabet(char16_t c)
		{
			return isUpperCase(c) || isLowerCase(c);
		}

		//	[0-9A-Za-z]
		constexpr static bool isAlphabetOrDigit(char16_t c)
		{
			return isAlphabet(c) || isDigit(c);
		}

		//	\s
		constexpr static bool isWhiteSpace(char16_t c)
		{
			return	c == u' '		||	//	半角スペース
					c == u'　'		||	//	全角スペース
					c == u'\u00a0'	||	//	nbsp
					c == u'\r'		||
					c == u'\n'		||
					c == u'\t'		||
					c == u'\v'		||
					c == u'\f';
		}

		//	[a-z] => [A-Z]
		constexpr static char16_t toUpperCase(char16_t c)
		{
			return isLowerCase(c) ? c - u'a' + u'A' : c;
		}

		//	[a-z] => [A-Z]
		constexpr static char16_t toLowerCase(char16_t c)
		{
			return isUpperCase(c) ? c - u'A' + u'a' : c;
		}
	};

}}	//	namespace Bell::Utf
