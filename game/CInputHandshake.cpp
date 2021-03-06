/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputHandshake.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputHandshake::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputHandshake * const, LPDESC, BYTE, const char *))Addr::CInputHandshake::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    CInputHandshake::CInputHandshake() {
        ((void(*)(CInputHandshake * const))Addr::CInputHandshake::CInputHandshake)(this);
    }

    BYTE CInputHandshake::GetType() {
        return ((BYTE(*)(CInputHandshake * const))Addr::CInputHandshake::GetType)(this);
    }
    CInputHandshake::~CInputHandshake() {
        ((void(*)(CInputHandshake * const))Addr::CInputHandshake::__CInputHandshake)(this);
    }

}