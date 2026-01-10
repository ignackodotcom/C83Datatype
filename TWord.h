/******************************************************************************
* \file      TWord.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Complete word data type definitions
*            cross c and cpp compatibile
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TWORD_H
#define TWORD_H		20260101L



#include "TInteger.h"



/******************************************************************************
**  Word basic data types
*/
typedef  UINT8					WORD8;
typedef  UINT8					Word8;
typedef  UINT8					word8;

typedef  UINT16					WORD16;
typedef  UINT16					Word16;
typedef  UINT16					word16;

typedef  UINT32					WORD32;
typedef  UINT32					Word32;
typedef  UINT32					word32;

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

typedef  UINT64					WORD64;
typedef  UINT64					Word64;
typedef  UINT64					word64;

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  Word data types basic operations get
*/
#define LOWORD8(w16)			((WORD8)((w16) & 0x00FF))

#define HIWORD8(w16)			((WORD8)(((w16) & 0xFF00) >> 8))

#define LOWORD16(w32)			((WORD16)((w32) & (WORD32)0x0000FFFFUL))

#define HIWORD16(w32)			((WORD16)(((w32) & (WORD32)0xFFFF0000UL) >> 16))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define LOWORD32(w64)			((WORD32)((w64) & (WORD64)0x00000000FFFFFFFFULL))

#define HIWORD32(w64)			((WORD32)(((w64) & (WORD64)0xFFFFFFFF00000000ULL) >> 32))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  Word data types basic operations make
*/
#define MAKEWORD8(hi,lo)		((WORD8)((((WORD8)(hi)) << 4) | ((WORD8)(lo) & (WORD8)0x0F)))

#define MAKEWORD16(hi,lo)		((WORD16)((((WORD16)(hi)) << 8) | ((WORD16)(lo) & (WORD16)0x00FF)))

#define MAKEWORD32(hi,lo)		((WORD32)((((WORD32)(hi)) << 16) | ((WORD32)(lo) & (WORD32)0x0000FFFF)))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define MAKEWORD64(hi,lo)		((WORD64)((((WORD64)(hi)) << 32) | ((WORD64)(lo) & (WORD64)0x00000000FFFFFFFF)))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



#endif /* TWORD_H */
