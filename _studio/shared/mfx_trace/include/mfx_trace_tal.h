// Copyright (c) 2010-2018 Intel Corporation
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

#ifndef __MFX_TRACE_TAL_H__
#define __MFX_TRACE_TAL_H__

#include "mfx_trace.h"

#ifdef MFX_TRACE_ENABLE_TAL

/*------------------------------------------------------------------------------*/

mfxTraceU32 MFXTraceTAL_Init();

mfxTraceU32 MFXTraceTAL_SetLevel(mfxTraceChar* category,
                            mfxTraceLevel level);

mfxTraceU32 MFXTraceTAL_DebugMessage(mfxTraceStaticHandle *static_handle,
                                const char *file_name, mfxTraceU32 line_num,
                                const char *function_name,
                                mfxTraceChar* category, mfxTraceLevel level,
                                const char *message,
                                const char *format, ...);

mfxTraceU32 MFXTraceTAL_vDebugMessage(mfxTraceStaticHandle *static_handle,
                                 const char *file_name, mfxTraceU32 line_num,
                                 const char *function_name,
                                 mfxTraceChar* category, mfxTraceLevel level,
                                 const char *message,
                                 const char *format, va_list args);

mfxTraceU32 MFXTraceTAL_BeginTask(mfxTraceStaticHandle *static_handle,
                             const char *file_name, mfxTraceU32 line_num,
                             const char *function_name,
                             mfxTraceChar* category, mfxTraceLevel level,
                             const char *task_name, mfxTraceTaskHandle *task_handle,
                             const void *task_params);

mfxTraceU32 MFXTraceTAL_EndTask(mfxTraceStaticHandle *static_handle,
                           mfxTraceTaskHandle *task_handle);

mfxTraceU32 MFXTraceTAL_Close(void);

#endif // #ifdef MFX_TRACE_ENABLE_TAL
#endif // #ifndef __MFX_TRACE_TAL_H__
