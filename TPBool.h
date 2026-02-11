/******************************************************************************
* \file      TPBool.h
* \version   2026.01.21
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Universal Bool constants, definitions and macros
*            cross c and cpp compatible
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TPBOOL_H
#define TPBOOL_H		20260121L



/******************************************************************************
* Cancel definitions in C and pre C++98
*/
#if !defined(__cplusplus) || __cplusplus < 199711L

	#if defined BOOL
		#undef BOOL
	#endif

	#if defined Bool
		#undef Bool
	#endif

	#if defined bool
		#undef bool
	#endif


	#if defined TRUE
		#undef TRUE
	#endif

	#if defined True
		#undef True
	#endif

	#if defined true
		#undef true
	#endif


	#if defined FALSE
		#undef FALSE
	#endif

	#if defined False
		#undef False
	#endif

	#if defined false
		#undef false
	#endif

#endif /* !defined(__cplusplus) || __cplusplus < 199711L */



/******************************************************************************
* New universal bool definitions
*/

#if defined(__cplusplus)

	#if __cplusplus < 199711L

        /* Pre C++ */
		typedef enum { false = 0, true = 1 } bool;

	#endif

	/* since C++98 is bool,true,false part of the language */

#else /* defined(__cplusplus) */

	#if !defined(__STDC_VERSION__) || __STDC_VERSION__ <= 199409L

        /* C95 and lower */
		typedef enum { false = 0, true = 1 } bool;
	
	#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L && __STDC_VERSION__ <= 201710L

        /* C99 - C17 */
		#include <stdbool.h>

	#endif

	/* since C23 is bool,true,false part of the language */

#endif /* defined(__cplusplus) */


#define BOOL bool
#define Bool bool

#define TRUE true
#define True true

#define FALSE false
#define False false



#endif /* TPBOOL_H */
