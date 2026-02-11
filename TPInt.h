/******************************************************************************
* \file      TPInt.h
* \version   2026.01.21
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Integer data type definitions
*            cross c and cpp compatible
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TPINT_H
#define TPINT_H		20260121L



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

	#if __cplusplus > 199711L

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

	/* C++98 and lower */
	#if __cplusplus <= 199711L

		#if UCHAR_MAX == 0xFFU
			typedef  signed char		Int8;
			typedef  unsigned char		UInt8;
		#elif USHRT_MAX == 0xFFU
			typedef  signed short		Int8;
			typedef  unsigned short		UInt8;
		#elif UINT_MAX == 0xFFU
			typedef  signed int			Int8;
			typedef  unsigned int		UInt8;
		#elif ULONG_MAX == 0xFFU || ULONG_MAX == 0xFFUL
			typedef  signed long		Int8;
			typedef  unsigned long		UInt8;
		#else
			#error "TPInt.h, No suitable type for Int8/UInt8, Nonstandard C++"
		#endif

		#if UCHAR_MAX == 0xFFFFU
			typedef  signed char		Int16;
			typedef  unsigned char		UInt16;
		#elif USHRT_MAX == 0xFFFFU
			typedef  signed short		Int16;
			typedef  unsigned short		UInt16;
		#elif UINT_MAX == 0xFFFFU
			typedef  signed int			Int16;
			typedef  unsigned int		UInt16;
		#elif ULONG_MAX == 0xFFFFU || ULONG_MAX == 0xFFFFUL
			typedef  signed long		Int16;
			typedef  unsigned long		UInt16;
		#else
			#error "TPInt.h, No suitable type for Int16/UInt16, Nonstandard C++"
		#endif

		#if UCHAR_MAX == 0xFFFFFFFFU || UCHAR_MAX == 0xFFFFFFFFUL
			typedef  signed char		Int32;
			typedef  unsigned char		UInt32;
		#elif USHRT_MAX == 0xFFFFFFFFU || USHRT_MAX == 0xFFFFFFFFUL
			typedef  signed short		Int32;
			typedef  unsigned short		UInt32;
		#elif UINT_MAX == 0xFFFFFFFFU || UINT_MAX == 0xFFFFFFFFUL
			typedef  signed int			Int32;
			typedef  unsigned int		UInt32;
		#elif ULONG_MAX == 0xFFFFFFFFU || ULONG_MAX == 0xFFFFFFFFUL
			typedef  signed long		Int32;
			typedef  unsigned long		UInt32;
		#else
			#error "TPInt.h, No suitable type for Int32/UInt32, Nonstandard C++"
		#endif

	#else /* __cplusplus >= 201103L */

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

		#if UCHAR_MAX == 0xFFU
			typedef  signed char		Int8;
			typedef  unsigned char		UInt8;
		#elif USHRT_MAX == 0xFFU
			typedef  signed short		Int8;
			typedef  unsigned short		UInt8;
		#elif UINT_MAX == 0xFFU
			typedef  signed int			Int8;
			typedef  unsigned int		UInt8;
		#elif ULONG_MAX == 0xFFU || ULONG_MAX == 0xFFUL
			typedef  signed long		Int8;
			typedef  unsigned long		UInt8;
		#else
			#error "TPInt.h, No suitable type for Int8/UInt8, Nonstandard C"
		#endif

		#if UCHAR_MAX == 0xFFFFU
			typedef  signed char		Int16;
			typedef  unsigned char		UInt16;
		#elif USHRT_MAX == 0xFFFFU
			typedef  signed short		Int16;
			typedef  unsigned short		UInt16;
		#elif UINT_MAX == 0xFFFFU
			typedef  signed int			Int16;
			typedef  unsigned int		UInt16;
		#elif ULONG_MAX == 0xFFFFU || ULONG_MAX == 0xFFFFUL
			typedef  signed long		Int16;
			typedef  unsigned long		UInt16;
		#else
			#error "TPInt.h, No suitable type for Int16/UInt16, Nonstandard C"
		#endif

		#if UCHAR_MAX == 0xFFFFFFFFU || UCHAR_MAX == 0xFFFFFFFFUL
			typedef  signed char		Int32;
			typedef  unsigned char		UInt32;
		#elif USHRT_MAX == 0xFFFFFFFFU || USHRT_MAX == 0xFFFFFFFFUL
			typedef  signed short		Int32;
			typedef  unsigned short		UInt32;
		#elif UINT_MAX == 0xFFFFFFFFU || UINT_MAX == 0xFFFFFFFFUL
			typedef  signed int			Int32;
			typedef  unsigned int		UInt32;
		#elif ULONG_MAX == 0xFFFFFFFFU || ULONG_MAX == 0xFFFFFFFFUL
			typedef  signed long		Int32;
			typedef  unsigned long		UInt32;
		#else
			#error "TPInt.h, No suitable type for Int32/UInt32, Nonstandard C"
		#endif

	#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

		/* C99 and higher */
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

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

	typedef     Int64			int64;
	typedef     UInt64			uint64;

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



typedef     Int8				INT8;
typedef     UInt8				UINT8;

typedef     Int16				INT16;
typedef     UInt16				UINT16;

typedef     Int32				INT32;
typedef     UInt32				UINT32;

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

	typedef     Int64			INT64;
	typedef     UInt64			UINT64;

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  C data types basic operations get
*/

/******************************************************************************
* \brief
*   Returns the lower nibble value of the UINT8 value.
*
* \param
*	ui8 - The basic UINT8 data type value.
*
* \return
*	Lo nibble value.
*
* \note
*
* \code
*   ...
*   n = LOUINT4(0x01);
*	...
* \endcode
*
*/
#define LOUINT4(ui8)			((UINT8)((UINT8)(ui8) & (UINT8)0x0F))

/******************************************************************************
* \brief
*   Returns the higher nibble value of the UINT8 value.
*
* \param
*	ui8 - The basic UINT8 data type value.
*
* \return
*	Hi nibble value.
*
* \note
*
* \code
*   ...
*   n = HIUINT4(0x01);
*	...
* \endcode
*
*/
#define HIUINT4(ui8)			((UINT8)(((UINT8)(ui8) & (UINT8)0xF0) >> 4))

/******************************************************************************
* \brief
*   Returns the lower UINT8 value of the UINT16 value.
*
* \param
*	ui16 - The basic UINT16 data type value.
*
* \return
*	Lo UINT8 value.
*
* \note
*
* \code
*   ...
*   ui8 = LOUINT8(0x0123);
*	...
* \endcode
*
*/
#define LOUINT8(ui16)			((UINT8)((UINT16)(ui16) & ((UINT16)0x00FF)))

/******************************************************************************
* \brief
*   Returns the higher UINT8 value of the UINT16 value.
*
* \param
*	ui16 - The basic UINT16 data type value.
*
* \return
*	Hi UINT8 value.
*
* \note
*
* \code
*   ...
*   ui8 = HIUINT8(0x0123);
*	...
* \endcode
*
*/
#define HIUINT8(ui16)			((UINT8)(((UINT16)(ui16) & ((UINT16)0xFF00)) >> 8))

/******************************************************************************
* \brief
*   Returns the lower UINT16 value of the UINT32 value.
*
* \param
*	ui32 - The basic UINT32 data type value.
*
* \return
*	Lo UINT16 value.
*
* \note
*
* \code
*   ...
*   ui16 = LOUINT16(0x01234567);
*	...
* \endcode
*
*/
#define LOUINT16(ui32)			((UINT16)((UINT32)(ui32) & ((UINT32)0x0000FFFF)))

/******************************************************************************
* \brief
*   Returns the higher UINT16 value of the UINT32 value.
*
* \param
*	ui32 - The basic UINT32 data type value.
*
* \return
*	Hi UINT16 value.
*
* \note
*
* \code
*   ...
*   ui16 = HIUINT16(0x01234567);
*	...
* \endcode
*
*/
#define HIUINT16(ui32)			((UINT16)(((UINT32)(ui32) & ((UINT32)0xFFFF0000)) >> 16))

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Returns the lower UINT32 value of the UINT64 value.
*
* \param
*	ui64 - The basic UINT64 data type value.
*
* \return
*	Lo UINT32 value.
*
* \note
*
* \code
*   ...
*   ui32 = LOUINT32(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define LOUINT32(ui64)			((UINT32)((UINT64)(ui64) & ((UINT64)0x00000000FFFFFFFF)))

/******************************************************************************
* \brief
*   Returns the higher UINT32 value of the UINT64 value.
*
* \param
*	ui64 - The basic UINT64 data type value.
*
* \return
*	Hi UINT32 value.
*
* \note
*
* \code
*   ...
*   ui32 = HIUINT32(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define HIUINT32(ui64)			((UINT32)(((UINT64)(ui64) & ((UINT64)0xFFFFFFFF00000000)) >> 32))

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  C data types basic operations make
*/

/* Not compatible with windows MAKEWORD */

/******************************************************************************
* \brief
*   Makes UINT8 value from two nibbles.
*
* \param
*   hi - nibble value
* \param
*   lo - nibble value
*
* \return
*	UINT8 value.
*
* \note
*
* \code
*   ...
*   ui8 = MAKEUINT8(0x0,0x1); // result 0x01
*	...
* \endcode
*
*/
#define MAKEUINT8(hi,lo)		((UINT8)((((UINT8)(hi) & (UINT8)0x0F) << 4) | ((UINT8)(lo) & (UINT8)0x0F)))

/******************************************************************************
* \brief
*   Makes UINT16 value from two UINT8.
*
* \param
*   hi - UINT8 value
* \param
*   lo - UINT8 value
*
* \return
*	UINT16 value.
*
* \note
*
* \code
*   ...
*   ui16 = MAKEUINT16(0x01,0x23); // result 0x0123
*	...
* \endcode
*
*/
#define MAKEUINT16(hi,lo)		((UINT16)((((UINT16)(hi) & (UINT16)0x00FF) << 8) | ((UINT16)(lo) & (UINT16)0x00FF)))

/******************************************************************************
* \brief
*   Makes UINT32 value from two UINT16.
*
* \param
*   hi - UINT16 value
* \param
*   lo - UINT16 value
*
* \return
*	UINT32 value.
*
* \note
*
* \code
*   ...
*   ui32 = MAKEUINT32(0x0123,0x4567); // result 0x01234567
*	...
* \endcode
*
*/
#define MAKEUINT32(hi,lo)		((UINT32)((((UINT32)(hi) & (UINT32)0x0000FFFF) << 16) | ((UINT32)(lo) & (UINT32)0x0000FFFF)))

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Makes UINT64 value from two UINT32.
*
* \param
*   hi - UINT32 value
* \param
*   lo - UINT32 value
*
* \return
*	UINT64 value.
*
* \note
*
* \code
*   ...
*   ui64 = MAKEUINT64(0x01234567,0x89ABCDEF); // result 0x0123456789ABCDEF
*	...
* \endcode
*
*/
#define MAKEUINT64(hi,lo)		((UINT64)((((UINT64)(hi) & (UINT64)0x00000000FFFFFFFF) << 32) | ((UINT64)(lo) & (UINT64)0x00000000FFFFFFFF)))

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  C data types basic operations swap
*/

/******************************************************************************
* \brief
*   Swaps nibbles in UINT8 value.
*
* \param
*   ui8 - UINT8 value
*
* \return
*	UINT8 value with swapped nibbles.
*
* \note
*
* \code
*   ...
*   ui8 = NSWAP8(0x01);
*	...
* \endcode
*
*/
#define NSWAP8(ui8)					((((UINT8)(ui8)  & (UINT8)0x0FU) << 4) | \
									 (((UINT8)(ui8)  & (UINT8)0xF0U) >> 4))

/******************************************************************************
* \brief
*   Swaps bytes in UINT16 value.
*
* \param
*   ui16 - UINT16 value
*
* \return
*	UINT16 value with swapped bytes.
*
* \note
*
* \code
*   ...
*   ui16 = BSWAP16(0x0123); // swapped to 0x2301
*	...
* \endcode
*
*/
#define BSWAP16(ui16)				((((UINT16)(ui16) & (UINT16)0x00FFU) << 8) | \
									 (((UINT16)(ui16) & (UINT16)0xFF00U) >> 8))

/******************************************************************************
* \brief
*   Swaps bytes in UINT32 value.
*
* \param
*   ui32 - UINT32 value
*
* \return
*	UINT32 value with swapped bytes.
*
* \note
*
* \code
*   ...
*   ui32 = BSWAP32(0x01234567); // swapped to 0x67452301
*	...
* \endcode
*
*/
#define BSWAP32(ui32)				((((UINT32)(ui32) & (UINT32)0x000000FFU) << 24) | \
									 (((UINT32)(ui32) & (UINT32)0x0000FF00U) <<  8) | \
									 (((UINT32)(ui32) & (UINT32)0x00FF0000U) >>  8) | \
									 (((UINT32)(ui32) & (UINT32)0xFF000000U) >> 24))

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Swaps bytes in UINT64 value.
*
* \param
*   ui64 - UINT64 value
*
* \return
*	UINT64 value with swapped bytes.
*
* \note
*
* \code
*   ...
*   ui64 = BSWAP64(0x0123456789ABCDEF); // swapped to 0xEFCDAB8967452301
*	...
* \endcode
*
*/
#define BSWAP64(ui64) 				((((UINT64)(ui64) & (UINT64)0x00000000000000FFU) << 56) | \
									 (((UINT64)(ui64) & (UINT64)0x000000000000FF00U) << 40) | \
									 (((UINT64)(ui64) & (UINT64)0x0000000000FF0000U) << 24) | \
									 (((UINT64)(ui64) & (UINT64)0x00000000FF000000U) <<  8) | \
									 (((UINT64)(ui64) & (UINT64)0x000000FF00000000U) >>  8) | \
									 (((UINT64)(ui64) & (UINT64)0x0000FF0000000000U) >> 24) | \
									 (((UINT64)(ui64) & (UINT64)0x00FF000000000000U) >> 40) | \
								     (((UINT64)(ui64) & (UINT64)0xFF00000000000000U) >> 56))

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



#endif /* TPINT_H */
