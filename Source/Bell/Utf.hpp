//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include "Utf/Utf.hpp"

namespace Bell {

	template <typename CharType>
	using Utf	= Utf_::Utf<CharType>;
	using Utf8	= Utf_::Utf8;
	using Utf16	= Utf_::Utf16;
	using Utf32	= Utf_::Utf32;

}	//	namespace Bell
