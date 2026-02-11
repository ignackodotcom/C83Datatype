/******************************************************************************
* \file      C83Datatype.h
* \version   2026.01.21 26.00.02.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     An universal data type system for C and C++ library
* \details
*
* \see       https://github.com/ignackodotcom
*            and other resources
******************************************************************************/

#ifndef C83DATATYPE_H
#define C83DATATYPE_H



#include "TPVoid.h"
#include "TPBool.h"
#include "TPInt.h"
#include "TPFloat.h"
#include "TPChar.h"
#include "TPCpu.h"
#include "TPReg.h"



/******************************************************************************
* version date format YYYYMMDD
*/
#define C83DATATYPE_VERSION_DATE	20260121L

/******************************************************************************
* version number format XXYYZZWW
*/
#define C83DATATYPE_VERSION_NUMBER  26000201L



#ifdef __cplusplus
extern "C" {
#endif

    long C83DATATYPE_DATE(void);
    long C83DATATYPE_VERSION(void);

#ifdef __cplusplus
}
#endif



#endif /* C83DATATYPE_H */
