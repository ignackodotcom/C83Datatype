/******************************************************************************
* \file      TFloat.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Float data type definitions
*            cross c and cpp compatibile
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TFLOAT_H
#define TFLOAT_H		20260101L



/******************************************************************************
**  New float type definitions
*/

typedef     float           FloatShort;

#if !defined(__SDCC) && !defined(SDCC)

/* Not implemented in Small Device C Compiler */
typedef     double          FloatMiddle;
typedef     long double     FloatLong;

#endif /* !defined(__SDCC) && !defined(SDCC) */



typedef     float           FLOATSHORT;

#if !defined(__SDCC) && !defined(SDCC)

/* Not implemented in Small Device C Compiler */
typedef     double          FLOATMIDDLE;
typedef     long double     FLOATLONG;

#endif /* !defined(__SDCC) && !defined(SDCC) */



typedef     float           floatshort;

#if !defined(__SDCC) && !defined(SDCC)

/* Not implemented in Small Device C Compiler */
typedef     double          floatmiddle;
typedef     long double     floatlong;

#endif /* !defined(__SDCC) && !defined(SDCC) */



#endif /* TFLOAT_H */
