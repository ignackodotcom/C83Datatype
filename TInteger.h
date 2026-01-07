/******************************************************************************
* \file      TInteger.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Integer data type definitions
*            cross c and cpp compatibile
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TINTEGER_H
#define TINTEGER_H		20260101L



/******************************************************************************
**  Standard integer includes
*/
#if defined(__cplusplus)

	/* C++ */
	#if defined(__TURBOC__)
		#include <limits.h>
	#else
		#include <climits>
	#endif

	#if __cplusplus >= 201103L

		/* Since C++ 11 */
		#include <cstdint>

	#endif

#else

	/* C */
	#include <limits.h>

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

		/* Since C99 */
		#include <stdint.h>

	#endif

#endif



/******************************************************************************
**  New constant size integer types definitions
*/

#if defined(__cplusplus)

	/* C++03/C++98 and lower */
	#if __cplusplus <= 199711L

		typedef  signed char		Int8;
		typedef  unsigned char		UInt8;

		typedef  signed short		Int16;
		typedef  unsigned short		UInt16;

		#if ULONG_MAX == 0xFFFFFFFFUL

			typedef  signed long    Int32;
			typedef  unsigned long  UInt32;

		#else

			typedef  signed int     Int32;
			typedef  unsigned int   UInt32;

		#endif

	#endif

	#if __cplusplus >= 201103L

		/* C++11 and higher */
		typedef  std::int8_t         Int8;
		typedef  std::uint8_t        UInt8;

		typedef  std::int16_t        Int16;
		typedef  std::uint16_t       UInt16;

		typedef  std::int32_t        Int32;
		typedef  std::uint32_t       UInt32;

		typedef  std::int64_t        Int64;
		typedef  std::uint64_t       UInt64;

	#endif

#else

	/* C95 and lower */
	#if !defined(__STDC_VERSION__) || __STDC_VERSION__ <= 199409L

		typedef  signed char		Int8;
		typedef  unsigned char		UInt8;

		typedef  signed short		Int16;
		typedef  unsigned short		UInt16;

		#if ULONG_MAX == 0xFFFFFFFFUL

			typedef  signed long    Int32;
			typedef  unsigned long  UInt32;

		#else

			typedef  signed int     Int32;
			typedef  unsigned int   UInt32;

		#endif

	#endif

	/* C99 and higher */
	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

		typedef  int8_t				Int8;
		typedef  uint8_t			UInt8;

		typedef  int16_t			Int16;
		typedef  uint16_t			UInt16;

		typedef  int32_t			Int32;
		typedef  uint32_t			UInt32;

		typedef  int64_t			Int64;
		typedef  uint64_t			UInt64;

	#endif

#endif



/******************************************************************************
**  New integer extended definitions
*/
typedef     Int8				int8;
typedef     UInt8				uint8;

typedef     Int16				int16;
typedef     UInt16				uint16;

typedef     Int32				int32;
typedef     UInt32				uint32;

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

	typedef     Int64			int64;
	typedef     UInt64			uint64;

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



typedef     Int8				INT8;
typedef     UInt8				UINT8;

typedef     Int16				INT16;
typedef     UInt16				UINT16;

typedef     Int32				INT32;
typedef     UInt32				UINT32;

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

	typedef     Int64			INT64;
	typedef     UInt64			UINT64;

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  C data types basic operations get
*/
#define LOUINT8(ui16)			((UINT8)((ui16) & ((UINT16)0x00FF)))

#define HIUINT8(ui16)			((UINT8)(((ui16) & ((UINT16)0xFF00)) >> 8))

#define LOUINT16(ui32)			((UINT16)((ui32) & ((UINT32)0x0000FFFFUL)))

#define HIUINT16(ui32)			((UINT16)(((ui32) & ((UINT32)0xFFFF0000UL)) >> 16))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define LOUINT32(ui64)			((UINT32)((ui64) & ((UINT64)0x00000000FFFFFFFFULL)))

#define HIUINT32(ui64)			((UINT32)(((ui64) & ((UINT64)0xFFFFFFFF00000000ULL)) >> 32))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  C data types basic operations make
*/
#define MAKEUINT8(hi,lo)		((UINT8)((((UINT8)(hi)) << 4) | ((UINT8)(lo))))

#define MAKEUINT16(hi,lo)		((UINT16)((((UINT16)(hi)) << 8 ) | ((UINT16)(lo))))

#define MAKEUINT32(hi,lo)		((UINT32)((((UINT32)(hi)) << 16 ) | ((UINT32)(lo))))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define MAKEUINT64(hi,lo)		((UINT64)((((UINT64)(hi)) << 32 ) | ((UINT64)(lo))))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



#endif /* TINTEGER_H */
