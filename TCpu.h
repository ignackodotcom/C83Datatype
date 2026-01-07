/******************************************************************************
* \file      TCpu.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Cpu data type definitions
*            cross c and cpp compatibile
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TCPU_H
#define TCPU_H		20260101L



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

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

typedef  UINT64					QWORD;
typedef  UINT64					QWord;
typedef  UINT64					qword;

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  cpu data types basic operations get
*/
#define LONIBBLE(byte)			((BYTE)((byte) & 0x0F))

#define HINIBBLE(byte)			((BYTE)(((byte) & 0xF0) >> 4))

#define LOBYTE(word)			((BYTE)((word) & 0x00FF))

#define HIBYTE(word)			((BYTE)(((word) & 0xFF00) >> 8))

#define LOWORD(dword)			((WORD)((dword) & (DWORD)0x0000FFFFUL))

#define HIWORD(dword)			((WORD)(((dword) & (DWORD)0xFFFF0000UL) >> 16))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define LODWORD(qword)			((DWORD)((qword) & (QWORD)0x00000000FFFFFFFFULL))

#define HIDWORD(qword)			((DWORD)(((qword) & (QWORD)0xFFFFFFFF00000000ULL) >> 32))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



/******************************************************************************
**  cpu data types basic operations make
*/
#define MAKEBYTE(hi,lo)			((BYTE)((((BYTE)(hi)) << 4) | (lo)))

#define MAKEWORD(hi,lo)			((WORD)((((WORD)(hi)) << 8 ) | (lo)))

#define MAKEDWORD(hi,lo)		((DWORD)((((DWORD)(hi)) << 16 ) | (lo)))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L

#define MAKEQWORD(hi,lo)		((QWORD)((((QWORD)(hi)) << 32 ) | (lo)))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */



#endif /* TCPU_H */
