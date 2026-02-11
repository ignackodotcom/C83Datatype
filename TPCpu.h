/******************************************************************************
* \file      TPCpu.h
* \version   2026.01.21
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Cpu data type definitions
*            cross c and cpp compatible
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TPCPU_H
#define TPCPU_H		20260121L



#include "TPInt.h"



/******************************************************************************
**  cpu basic data types
*/
typedef  UINT8					BYTE;
typedef  UINT8					Byte;
typedef  UINT8					byte;

typedef  UINT16					WORD;
typedef  UINT16					Word;
typedef  UINT16					word;

typedef  UINT32					DWORD;
typedef  UINT32					DWord;
typedef  UINT32					dword;

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

typedef  UINT64					QWORD;
typedef  UINT64					QWord;
typedef  UINT64					qword;

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  cpu data types basic operations get
*/

/******************************************************************************
* \brief
*   Returns the lower nibble value of the byte value.
*
* \param
*	bt - The basic byte data type value.
*
* \return
*	Lo nibble value.
*
* \note
*
* \code
*   ...
*   n = LONIBBLE(0x01);
*	...
* \endcode
*
*/
#define LONIBBLE(bt)			LOUINT4(bt)

/******************************************************************************
* \brief
*   Returns the higher nibble value from the byte value.
*
* \param
*	bt - The basic byte data type value.
*
* \return
*	Hi nibble value.
*
* \note
*
* \code
*   ...
*   n = HINIBBLE(0x01);
*	...
* \endcode
*
*/
#define HINIBBLE(bt)			HIUINT4(bt)

/******************************************************************************
* \brief
*   Returns the lower byte value from the word value.
*
* \param
*	wrd - The basic word data type value.
*
* \return
*	Lo byte value.
*
* \note
*
* \code
*   ...
*   b = LOBYTE(0x0123);
*	...
* \endcode
*
*/
#define LOBYTE(wrd)			    LOUINT8(wrd)

/******************************************************************************
* \brief
*   Returns the higher byte value from the word value.
*
* \param
*	wrd - The basic word data type value.
*
* \return
*	Hi byte value.
*
* \note
*
* \code
*   ...
*   b = HIBYTE(0x0123);
*	...
* \endcode
*
*/
#define HIBYTE(wrd)			    HIUINT8(wrd)

/******************************************************************************
* \brief
*   Returns the lower word value from the dword value.
*
* \param
*	dwrd - The basic dword data type value.
*
* \return
*	Lo word value.
*
* \note
*
* \code
*   ...
*   w = LOWORD(0x01234567);
*	...
* \endcode
*
*/
#define LOWORD(dwrd)			LOUINT16(dwrd)

/******************************************************************************
* \brief
*   Returns the higher word value from the dword value.
*
* \param
*	dwrd - The basic dword data type value.
*
* \return
*	Hi word value.
*
* \note
*
* \code
*   ...
*   w = HIWORD(0x01234567);
*	...
* \endcode
*
*/
#define HIWORD(dwrd)			HIUINT16(dwrd)

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Returns the lower dword value from the qword value.
*
* \param
*	qwrd - The basic qword data type value.
*
* \return
*	Lo dword value.
*
* \note
*
* \code
*   ...
*   d = LODWORD(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define LODWORD(qwrd)			LOUINT32(qwrd)

/******************************************************************************
* \brief
*   Returns the higher dword value from the qword value.
*
* \param
*	qwrd - The basic qword data type value.
*
* \return
*	Hi dword value.
*
* \note
*
* \code
*   ...
*   d = HIDWORD(0x0123456789ABCDEF);
*	...
* \endcode
*
*/
#define HIDWORD(qwrd)			HIUINT32(qwrd)

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



/******************************************************************************
**  cpu data types basic operations make
*/

/* Not compatible with windows MAKEWORD */

/******************************************************************************
* \brief
*   Makes byte value from two nibbles.
*
* \param
*   hi - nibble value
* \param
*   lo - nibble value
*
* \return
*	Byte value.
*
* \note
*
* \code
*   ...
*   b = MAKEBYTE(0x0,0x1); // result 0x01
*	...
* \endcode
*
*/
#define MAKEBYTE(hi,lo)			MAKEUINT8((hi),(lo))

/******************************************************************************
* \brief
*   Makes word value from two bytes.
*
* \param
*   hi - byte value
* \param
*   lo - byte value
*
* \return
*	Word value.
*
* \note
*
* \code
*   ...
*   w = MAKEWORD(0x01,0x23); // result 0x0123
*	...
* \endcode
*
*/
#define MAKEWORD(hi,lo)			MAKEUINT16((hi),(lo))

/******************************************************************************
* \brief
*   Makes dword value from two words.
*
* \param
*   hi - word value
* \param
*   lo - word value
*
* \return
*	DWord value.
*
* \note
*
* \code
*   ...
*   w = MAKEDWORD(0x0123,0x4567); // result 0x01234567
*	...
* \endcode
*
*/
#define MAKEDWORD(hi,lo)		MAKEUINT32((hi),(lo))

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L)

/******************************************************************************
* \brief
*   Makes qword value from two dwords.
*
* \param
*   hi - dword value
* \param
*   lo - dword value
*
* \return
*	QWord value.
*
* \note
*
* \code
*   ...
*   q = MAKEQWORD(0x01234567,0x89ABCDEF); // result 0x0123456789ABCDEF
*	...
* \endcode
*
*/
#define MAKEQWORD(hi,lo)		MAKEUINT64((hi),(lo))

#endif /* (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(__cplusplus) && __cplusplus >= 201103L) */



#endif /* TPCPU_H */
