// Copyright (c) 2011-2020 Intel Corporation
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "mfx_common.h"
#include <libmfx_core_factory.h>
#include <libmfx_core.h>

#include <libmfx_core_vaapi.h>

VideoCORE* FactoryCORE::CreateCORE(eMFXVAType va_type,
                                   mfxU32 adapterNum,
                                   const std::pair<mfxU32, std::vector<mfxU8>> & affinityMask,
                                   mfxU32 numThreadsAvailable,
                                   mfxSession session)
{
    (void)adapterNum;
    std::ignore = affinityMask;

    switch (va_type)
    {
    case MFX_HW_NO:
        return new CommonCORE_VPL(numThreadsAvailable, session);

    case MFX_HW_VAAPI:
        return new VAAPIVideoCORE_VPL(adapterNum, affinityMask, numThreadsAvailable, session);
    default:
        return nullptr;
    }

} // VideoCORE* FactoryCORE::CreateCORE(eMFXVAType va_type)
