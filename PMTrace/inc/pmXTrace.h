/*--------------------------------------------------------------------------*\
 * Copyright (c) 1998-2002 AbyreSoft. All rights reserved.
 *--------------------------------------------------------------------------*
 * pmXTrace.h - Written by Bruno Raby.
 * Tracing functions.
 *--------------------------------------------------------------------------*
 * 2018 - Je privilégie CRLF ainsi TRACEx(X) retourne a la ligne
\*--------------------------------------------------------------------------*/

#ifndef _PM_XTRACE_H_
#define _PM_XTRACE_H_

/*--------------------------------------------------------------------------*/

#include "cXTypes.h"
#include "pmXEnv.h"

/*--------------------------------------------------------------------------*/

#ifdef __cplusplus
   extern "C" {
#endif

/*--------------------------------------------------------------------------*/

#ifdef PM_USE_TRACES

#pragma message("PM_USE_TRACES - Defined in TRACE")

#include <stdarg.h>

	void TRACE_INIT(HINSTANCE aInstance);
	void TRACE_CLOSE();

	void TRACE0_T( char* aFormat, ... );
	void TRACE0_TL( char* aFormat, ... );
	void TRACE0_B( pmbyte* aBuffer, size_t aBufferLen );

	void TRACE1_T( char* aFormat, ... );
	void TRACE1_TL( char* aFormat, ... );
	void TRACE1_B( pmbyte* aBuffer, size_t aBufferLen );

	void TRACE2_T( char* aFormat, ... );
	void TRACE2_TL( char* aFormat, ... );
	void TRACE2_B( pmbyte* aBuffer, size_t aBufferLen );

	void TRACE3_T( char* aFormat, ... );
	void TRACE3_TL( char* aFormat, ... );
	void TRACE3_B( pmbyte* aBuffer, size_t aBufferLen );

#   define TRACE0(X) TRACE0_TL(X)
#   define TRACE1(X) TRACE1_TL(X)
#   define TRACE2(X) TRACE2_TL(X)
#   define TRACE3(X) TRACE3_TL(X)

#   define PM_TRACE0(X) TRACE0_ ## X
#   define PM_TRACE1(X) TRACE1_ ## X
#   define PM_TRACE2(X) TRACE2_ ## X
#   define PM_TRACE3(X) TRACE3_ ## X

#else

#pragma message("PM_USE_TRACES - NOT Defined in TRACE")

/*--------------------------------------------------------------------------*\
 * Avoid traces functions if PM_USE_TRACES is NOT Defined
\*--------------------------------------------------------------------------*/

#  define TRACE_INIT(X)    ((void) 0)
#  define TRACE_CLOSE(X)    ((void) 0)

#   define TRACE0(X) ((void) 0)
#   define TRACE1(X) ((void) 0)
#   define TRACE2(X) ((void) 0)
#   define TRACE3(X) ((void) 0)

#  define PM_TRACE0(X)    ((void) 0)
#  define PM_TRACE1(X)    ((void) 0)
#  define PM_TRACE2(X)    ((void) 0)
#  define PM_TRACE3(X)    ((void) 0)

#endif /* PM_USE_TRACES */

/*--------------------------------------------------------------------------*/

#ifdef __cplusplus
   }
#endif

/*--------------------------------------------------------------------------*/

#endif /* _PM_XTRACE_H_ */
