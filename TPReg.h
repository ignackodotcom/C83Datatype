/******************************************************************************
* \file      TPReg.h
* \version   2026.01.21
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Complete reg data type definitions
*            cross c and cpp compatible
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TPREG_H
#define TPREG_H		20260121L



#include "TPInt.h"



/******************************************************************************
**  Reg basic data types
*/
typedef  UINT8					REG8;
typedef  UINT8					Reg8;
typedef  UINT8					reg8;

typedef  UINT16					REG16;
typedef  UINT16					Reg16;
typedef  UINT16					reg16;

typedef  UINT32					REG32;
typedef  UINT32					Reg32;
typedef  UINT32					reg32;

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

typedef  UINT64					REG64;
typedef  UINT64					Reg64;
typedef  UINT64					reg64;

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  Reg data types basic operations get
*/

/******************************************************************************
* \brief
*   Returns the lower nibble value of the REG8 value.
*
* \param
*	r8 - The basic REG8 data type value.
*
* \return
*	Lo nibble value.
*
* \note
*
* \code
*   ...
*   n = LOREG4(0x01);
*	...
* \endcode
*
*/
#define LOREG4(r8)			    LOUINT4(r8)

/******************************************************************************
* \brief
*   Returns the higher nibble value of the REG8 value.
*
* \param
*	r8 - The basic REG8 data type value.
*
* \return
*	Hi nibble value.
*
* \note
*
* \code
*   ...
*   n = HIREG4(0x01);
*	...
* \endcode
*
*/
#define HIREG4(r8)			    HIUINT4(r8)

/******************************************************************************
* \brief
*   Returns the lower REG8 value of the REG16 value.
*
* \param
*	r16 - The basic REG16 data type value.
*
* \return
*	Lo REG8 value.
*
* \note
*
* \code
*   ...
*   r8 = LOREG8(0x0123);
*	...
* \endcode
*
*/
#define LOREG8(r16)			    LOUINT8(r16)

/******************************************************************************
* \brief
*   Returns the higher REG8 value of the REG16 value.
*
* \param
*	r16 - The basic REG16 data type value.
*
* \return
*	Hi REG8 value.
*
* \note
*
* \code
*   ...
*   r8 = HIREG8(0x0123);
*	...
* \endcode
*
*/
#define HIREG8(r16)			    HIUINT8(r16)

/******************************************************************************
* \brief
*   Returns the lower REG16 value of the REG32 value.
*
* \param
*	r32 - The basic REG32 data type value.
*
* \return
*	Lo REG16 value.
*
* \note
*
* \code
*   ...
*   r16 = LOREG16(0x01234567);
*	...
* \endcode
*
*/
#define LOREG16(r32)			LOUINT16(r32)

/******************************************************************************
* \brief
*   Returns the higher REG16 value of the REG32 value.
*
* \param
*	r32 - The basic REG32 data type value.
*
* \return
*	Hi REG16 value.
*
* \note
*
* \code
*   ...
*   r16 = HIREG16(0x01234567);
*	...
* \endcode
*
*/
#define HIREG16(r32)			HIUINT16(r32)

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Returns the lower REG32 value of the REG64 value.
*
* \param
*	r64 - The basic REG64 data type value.
*
* \return
*	Lo REG32 value.
*
* \note
*
* \code
*   ...
*   r32 = LOREG32(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define LOREG32(r64)			LOUINT32(r64)

/******************************************************************************
* \brief
*   Returns the higher REG32 value of the REG64 value.
*
* \param
*	r64 - The basic REG64 data type value.
*
* \return
*	Hi REG32 value.
*
* \note
*
* \code
*   ...
*   r32 = HIREG32(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define HIREG32(r64)			HIUINT32(r64)

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  reg data types basic operations make
*/

/* Not compatible with windows MAKEWORD */

/******************************************************************************
* \brief
*   Makes REG8 value from two nibbles.
*
* \param
*   hi - nibble value
* \param
*   lo - nibble value
*
* \return
*	REG8 value.
*
* \note
*
* \code
*   ...
*   r8 = MAKEREG8(0x0,0x1); // result 0x01
*	...
* \endcode
*
*/
#define MAKEREG8(hi,lo)			MAKEUINT8((hi),(lo))

/******************************************************************************
* \brief
*   Makes REG16 value from two REG8.
*
* \param
*   hi - REG8 value
* \param
*   lo - REG8 value
*
* \return
*	REG16 value.
*
* \note
*
* \code
*   ...
*   r16 = MAKEREG16(0x01,0x23); // result 0x0123
*	...
* \endcode
*
*/
#define MAKEREG16(hi,lo)		MAKEUINT16((hi),(lo))

/******************************************************************************
* \brief
*   Makes REG32 value from two REG16.
*
* \param
*   hi - REG16 value
* \param
*   lo - REG16 value
*
* \return
*	REG32 value.
*
* \note
*
* \code
*   ...
*   r32 = MAKEREG32(0x0123,0x4567); // result 0x01234567
*	...
* \endcode
*
*/
#define MAKEREG32(hi,lo)		MAKEUINT32((hi),(lo))

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Makes REG64 value from two REG32.
*
* \param
*   hi - REG32 value
* \param
*   lo - REG32 value
*
* \return
*	REG64 value.
*
* \note
*
* \code
*   ...
*   r64 = MAKEREG64(0x01234567,0x89ABCDEF); // result 0x0123456789ABCDEF
*	...
* \endcode
*
*/
#define MAKEREG64(hi,lo)		MAKEUINT64((hi),(lo))

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



#endif /* TPREG_H */
