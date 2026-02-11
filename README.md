# C83Datatype

## Universal data type system for C and C++

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

`WORDXX data types section in TPWord.h renamed to REGXX in section TPReg.h.
This was necessary due to a possible collision between the types WORDXX from TPWord.h and WORD from TPCpu.h.
Please use appropriate UINTXX or REGXX types.`

### Overview
C83Datatype is a universal, portable data type system for C and C++, 
designed to unify and standardize fundamental data types across a wide range of compilers, 
platforms, and language standards. 
It provides a consistent, predictable foundation for integer, 
floating‑point, character, boolean, void, and CPU‑sized types, 
along with robust conversion and construction macros.

### Features

- Universal Cross‑Standard Type Definitions
- Compatibility with Legacy and Embedded Compilers
- Robust Integer Conversion Macros
- MAKE Macros (HILO Conventions)
- Byte‑Swap and Nibble‑Swap Utilities
- CPU‑Sized Data Types
- Strict 8‑Bit Byte Enforcement
- Clean Modular Architecture

### Design Goals

- Universal Portability Across C and C++ Standards
- Predictable and Stable Type Sizes
- Robust Binary Manipulation Tools
- Zero Runtime Overhead
- Strict Safety and Predictability
- Practical Usability in Real‑World Projects

### Repository Structure

| Filename      | Description                                                                       |
|---------------|-----------------------------------------------------------------------------------|
| C83Datatype.h | Main include file, exposes version API                                            |
| C83Datatype.c	| Implementation of version function                                                |
| TPVoid.h      | Universal VOID Void void definitions                                              |
| TPBool.h      | Portable BOOL, TRUE, FALSE definitions with aliases                               |
| TPInt.h       | Fixed-width integers (INT8–UINT64), LO/HI/MAKE/BSWAP/NSWAP macros                 |
| TPFloat.h     | Floating-point types (FLOATSHORT / FLOATMIDDLE / FLOATLONG – limited in SDCC)     |
| TPChar.h      | Character types (CHAR, UCHAR, WCHAR + aliases)                                    |
| TPCpu.h       | CPU-oriented types: BYTE, WORD, DWORD, QWORD + LOWORD / HIWORD / MAKE macros      |
| TPReg.h       | Register-oriented types: REG8, REG16, REG32, REG64 + LOREG / HIREG / MAKE  macros |

The main header C83Datatype.h aggregates all packages and exposes version information.

### C/C++ defined data types (and aliases)

```c
    VOID, Void, void

    BOOL, Bool, bool                        /* values TRUE, True, true, FALSE, False, false */

    INT8,  Int8,  int8                      /*  8 bit data types */
    INT16, Int16, int16                     /* 16 bit data types */
    INT32, Int32, int32                     /* 32 bit data types */
    INT64, Int64, int64                     /* 64 bit data types *//* since C99/C++11 */

    UINT8,  UInt8,  uint8                   /*  8 bit data types */
    UINT16, UInt16, uint16                  /* 16 bit data types */
    UINT32, UInt32, uint32                  /* 32 bit data types */
    UINT64, UInt64, uint64                  /* 64 bit data types *//* since C99/C++11 */

    FLOATSHORT,  FloatShort,  floatshort    /* float */
    FLOATMIDDLE, FloatMiddle, floatmiddle   /* double */      /* absent in SDCC */
    FLOATLONG,   FloatLong,   floatlong     /* long double */ /* absent in SDCC */

    CHAR, Char, char
    UCHAR, UChar, uchar
    WCHAR, WChar, wchar                     /* since C95/C++98 */
```

and conversion macros - get
```c
    #define LOUINT4(ui8)        ...         /* returns nibble */
    #define HIUINT4(ui8)        ...         /* returns nibble */

    #define LOUINT8(ui16)       ...         /* returns UINT8 */
    #define HIUINT8(ui16)       ...         /* returns UINT8 */

    #define LOUINT16(ui32)      ...         /* returns UINT16 */
    #define HIUINT16(ui32)      ...         /* returns UINT16 */

    #define LOUINT32(ui64)      ...         /* returns UINT32 *//* since C99/C++11 */
    #define HIUINT32(ui64)      ...         /* returns UINT32 *//* since C99/C++11 */
```

and conversion macros - make
<code style="color : Red">
The order of the HI,LO parameters is not compatible with the Windows macro MAKEWORD.
</code>
```c
    #define MAKEUINT8(hi,lo)    ...         /* hi and lo are nibbles with value 0-15 */

    #define MAKEUINT16(hi,lo)   ...         /* hi and lo are UINT8 */

    #define MAKEUINT32(hi,lo)   ...         /* hi and lo are UINT16 */

    #define MAKEUINT64(hi,lo)   ...         /* hi and lo are UINT32 *//* since C99/C++11 */
```

and nibble and byte swap macros
```c
    #define NSWAP8(ui8)         ...         /* nibble swap */

    #define BSWAP16(ui16)       ...         /* byte swap */

    #define BSWAP32(ui32)       ...         /* byte swap */

    #define BSWAP64(ui64)       ...         /* byte swap *//* since C99/C++11 */
```

### CPU data types
```
    BYTE,  Byte,  byte                      /*  8 bit data type */
    WORD,  Word,  word                      /* 16 bit data type */
    DWORD, DWord, dword                     /* 32 bit data type */
    QWORD, QWord, qword                     /* 64 bit data type, since C99/C++11 */
```

and conversion macros - get
```c
    #define LONIBBLE(bt)        ...         /* returns nibble */
    #define HINIBBLE(bt)        ...         /* returns nibble */

    #define LOBYTE(wrd)         ...         /* returns BYTE */
    #define HIBYTE(wrd)         ...         /* returns BYTE */

    #define LOWORD(dwrd)        ...         /* returns WORD */
    #define HIWORD(dwrd)        ...         /* returns WORD */

    #define LODWORD(qwrd)       ...         /* returns DWORD *//* since C99/C++11 */
    #define HIDWORD(qwrd)       ...         /* returns DWORD *//* since C99/C++11 */
```

and conversion macros - make
<code style="color : Red">
The order of the HI,LO parameters is not compatible with the Windows macro MAKEWORD.
</code>
```c
    #define MAKEBYTE(hi,lo)     ...         /* hi and lo are nibbles with value 0-15 */

    #define MAKEWORD(hi,lo)     ...         /* hi and lo are BYTE */

    #define MAKEDWORD(hi,lo)    ...         /* hi and lo are WORD */

    #define MAKEQWORD(hi,lo)    ...         /* hi and lo are DWORD *//* since C99/C++11 */
```

### REG data types
```
    REG8,  Reg8,  reg8                      /*  8 bit data type */
    REG16, Reg16, reg16                     /* 16 bit data type */
    REG32, Reg32, reg32                     /* 32 bit data type */
    REG64, Reg64, reg64                     /* 64 bit data type, since C99/C++11 */
```

and conversion macros - get
```c
    #define LOREG4(r8)          ...         /* returns nibble */
    #define HIREG4(r8)          ...         /* returns nibble */

    #define LOREG8(r16)         ...         /* returns REG8 */
    #define HIREG8(r16)         ...         /* returns REG8 */

    #define LOREG16(r32)        ...         /* returns REG16 */
    #define HIREG16(r32)        ...         /* returns REG16 */

    #define LOREG32(r64)        ...         /* returns REG32 *//* since C99/C++11 */
    #define HIREG32(r64)        ...         /* returns REG32 *//* since C99/C++11 */
```

and conversion macros - make
<code style="color : Red">
The order of the HI,LO parameters is not compatible with the Windows macro MAKEWORD.
</code>
```c
    #define MAKEREG8(hi,lo)     ...         /* hi and lo are nibbles with value 0-15 */

    #define MAKEREG16(hi,lo)    ...         /* hi and lo are REG8 */

    #define MAKEREG32(hi,lo)    ...         /* hi and lo are REG16 */

    #define MAKEREG64(hi,lo)    ...         /* hi and lo are REG32 *//* since C99/C++11 */
```

### SDCC (Small Device C Compiler) limitations

SDCC does not implement `double` or `long double`.  
In such case `TPFloat.h` defines only:

- `FLOATSHORT` / `FloatShort` / `floatshort` (= `float`)

`FLOATMIDDLE`, `FLOATLONG` (and their aliases) are conditionally excluded via `#if`.

## Usage

### Constructing and extracting values
```c
    UINT16 value = MAKEUINT16(0x12, 0x34); 
    UINT8  lo = LOUINT8(value); 
    UINT8  hi = HIUINT8(value);
```

### Constructing and extracting values TPCpu.h
```c
    WORD  value = MAKEWORD(0x12, 0x34);
    BYTE  lo = LOBYTE(value); 
    BYTE  hi = HIBYTE(value);
```

### Constructing and extracting values TPReg.h
```c
    REG16 value = MAKEREG16(0x12, 0x34);
    REG8  lo = LOREG8(value); 
    REG8  hi = HIREG8(value);
```

### Byte swap
```c
    UINT32 x = BSWAP32(0x11223344); /* result 0x44332211 */
```

### Best Practices
- Include the Main Header
- Prefer Fixed‑Width Types for Binary Data
- Use Macros Instead of Manual Bit Shifts
- Use Byte‑Swap Macros for Endian Conversion
- Avoid Mixing Native Types with C83Datatype Types
- Use Boolean Types Consistently
- Prefer Uppercase Aliases for Public APIs

### License
This library is licensed under the MIT License. See the LICENSE file for details.

# Updates
| YY MM DD   | XX YY ZZ WW | Brief description of updates|
|------------|-------------|-----------------------------|
| 2025 11 02 |             | Detailed description        |
| 2025 11 19 |             | This readme.md updated, C style comments added |
| 2026 01 07 |             | C89 signed ints defined implicitly using the keyword signed |
| 2026 01 07 |             | hi parameter in make macros enclosed in parentheses () |
| 2026 01 10 |             | MAKE macros modified to be more robust |
| 2026 01 10 |             | #include "TInteger.h" added to TWord.h |
| 2026 01 10 |             | #include "TInteger.h" added to TCpu.h |
| 2026 01 10 |             | CPU data types section Note added |
| 2026 01 21 | 26 00 02 01 | Refactored code with backward compatibility ensured with the exception of WORDXX types |
| 2026 01 21 | 26 00 02 01 | Better Fallback definitions for C89 and C++98 compilers and lower |
| 2026 01 21 | 26 00 02 01 | Header files renamed from T*.h to TP*.h to fix potential collision with other libraries |
| 2026 01 21 | 26 00 02 01 | TPWord.h renamed to TPReg.h |
| 2026 01 21 | 26 00 02 01 | WORDXX data types section in TPWord.h renamed to REGXX in TPReg.h |
