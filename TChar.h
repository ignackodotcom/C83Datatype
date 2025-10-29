/******************************************************************************
* \file      TChar.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Char constants, definitions and macros
*            cross c and cpp compatibile
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TCHAR_H
#define TCHAR_H		20260101L



/******************************************************************************
** Standard wchar includes
*/
#if !defined(__cplusplus)

 /* C */
 #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L

  /* Since C95 */
  #include <wchar.h>

 #endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

#endif /* !defined(__cplusplus) */



/******************************************************************************
** Additional char definitions
*/
typedef char                Char;
typedef unsigned char       UChar;

#if defined(__cplusplus)

	#if __cplusplus >= 199711L
		typedef wchar_t     WChar;
	#endif

#else

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L
		typedef wchar_t     WChar;
	#endif

#endif



typedef Char                CHAR;
typedef UChar               UCHAR;

#if defined(__cplusplus)

	#if __cplusplus >= 199711L
		typedef WChar       WCHAR;
	#endif

#else

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L
		typedef WChar       WCHAR;
	#endif

#endif



typedef UChar               uchar;

#if defined(__cplusplus)

	#if __cplusplus >= 199711L
		typedef WChar       wchar;
	#endif

#else

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L
		typedef WChar       wchar;
	#endif

#endif



#endif /* TCHAR_H */
