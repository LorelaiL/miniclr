////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _MINICLR_PLATFORMDEF_H_
#define _MINICLR_PLATFORMDEF_H_

////////////////////////////////////////////////////////////////////////////////////////////////////
// PLATFORMS GENERAL DEFINITIONS
#if defined(_WIN32) || defined(WIN32)
#define PLATFORM_WINDOWS
#define MINICLR_STOP() ::DebugBreak()
#pragma warning( error : 4706 ) // error C4706: assignment within conditional expression
#elif defined(arm) || defined(__arm) || defined(__GNUC__)
#define PLATFORM_ARM
#define MINICLR_STOP() HARD_BREAKPOINT()
#endif

#if !defined(PLATFORM_WINDOWS) 
#if defined(LITTLE_ENDIAN)
#define MINICLR_LITTLE_ENDIAN 1
#elif defined(BIG_ENDIAN)
#define MINICLR_BIG_ENDIAN    1
#else
!ERROR
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////
// DEFINITIONS
#define MINICLR_MAX_ASSEMBLY_NAME 128

////////////////////////////////////////////////////////////////////////////////////////////////////
// FEATURES


//-o-//-o-//-o-//-o-//-o-//-o-//
// PLATFORMS
//-o-//-o-//-o-//-o-//-o-//-o-//

////////////////////////////////////////////////////////////////////////////////////////////////////
// WINDOWS
#if defined(PLATFORM_WINDOWS)
#define  __inline__  __inline
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////
// ARM
#if defined(arm) || defined(__arm) || defined(__GNUC__)

#endif


////////////////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES
#if defined(PLATFORM_WINDOWS)
//Unsafe string functions be avoided, but there isn't a safe crt for the arm, so 
//a bunch of macros, cleanup code needs to be done first

#include <windows.h>


#else


#endif

#endif // _MINICLR_PLATFORMDEF_H_

