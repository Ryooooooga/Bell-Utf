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

	/**
	 * @brief      UTFエンコーディングに関する関数群
	 *
	 * @tparam     CharType  文字型
	 */
	template <typename CharType>
	struct Utf {};

	using Utf8	= Utf<char>;
	using Utf16	= Utf<char16_t>;
	using Utf32	= Utf<char32_t>;

}}	//	namespace Bell::Utf

#include "Utf8.inl"
#include "Utf16.inl"
#include "Utf32.inl"
