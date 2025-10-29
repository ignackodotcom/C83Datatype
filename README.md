# C83Datatype

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

a comprehensive universal data type system

<br>

C/C++ data types
```c
    VOID, Void, void

    BOOL, Bool, bool        // values TRUE, True, true, FALSE, False, false

    INT8,  Int8,  int8      //  8 bit data types
    INT16, Int16, int16     // 16 bit data types
    INT32, Int32, int32     // 32 bit data types
    INT64, Int64, int64     // 64 bit data types, since C99/C++11

    UINT8,  UInt8,  uint8   //  8 bit data types
    UINT16, UInt16, uint16  // 16 bit data types
    UINT32, UInt32, uint32  // 32 bit data types
    UINT64, UInt64, uint64  // 64 bit data types, since C99/C++11

    FLOATSHORT,  FloatShort,  floatshort    // float
    FLOATMIDDLE, FloatMiddle, floatmiddle   // double
    FLOATLONG,   FloatLong,   floatlong     // long double

    CHAR, Char, char
    WCHAR, WChar, wchar
```

and conversion macros - get
```c
    #define LOUINT8(ui16)       ...
    #define HIUINT8(ui16)       ...

    #define LOUINT16(ui32)      ...
    #define HIUINT16(ui32)      ...

    #define LOUINT32(ui64)      ..., since C99/C++11
    #define HIUINT32(ui64)      ..., since C99/C++11
```

and conversion macros - make
```c
    #define MAKEUINT8(hi,lo)    ...

    #define MAKEUINT16(hi,lo)   ...

    #define MAKEUINT32(hi,lo)   ...

    #define MAKEUINT64(hi,lo)   ..., since C99/C++11
```
<br>


WORD data types
```c
    WORD8,  Word8,  word8   //  8 bit data types
    WORD16, Word16, word16  // 16 bit data types
    WORD32, Word32, word32  // 32 bit data types
    WORD64, Word64, word64  // 64 bit data types, since C99/C++11
```

and conversion macros - get
```c
    #define LOWORD8(w16)        ...
    #define HIWORD8(w16)        ...

    #define LOWORD16(w32)       ...
    #define HIWORD16(w32)       ...

    #define LOWORD32(w64)       ..., since C99/C++11
    #define HIWORD32(w64)       ..., since C99/C++11
```

and conversion macros - make
```c
    #define MAKEWORD8(hi,lo)    ...

    #define MAKEWORD16(hi,lo)   ...

    #define MAKEWORD32(hi,lo)   ...

    #define MAKEWORD64(hi,lo)   ..., since C99/C++11
```
<br>


CPU data types
```c
    BYTE,  Byte,  byte      //  8 bit data type
    WORD,  Word,  word      // 16 bit data type
    DWORD, DWord, dword     // 32 bit data type
    QWORD, QWord, qword     // 64 bit data type, since C99/C++11
```

and conversion macros - get
```c
    #define LONIBBLE(byte)      ...
    #define HINIBBLE(byte)      ...

    #define LOBYTE(word)        ...
    #define HIBYTE(word)        ...

    #define LOWORD(dword)       ...
    #define HIWORD(dword)       ...

    #define LODWORD(qword)      ..., since C99/C++11
    #define HIDWORD(qword)      ..., since C99/C++11
```

and conversion macros - make
```c
    #define MAKEBYTE(hi,lo)     ...

    #define MAKEWORD(hi,lo)     ...

    #define MAKEDWORD(hi,lo)    ...

    #define MAKEQWORD(hi,lo)    ..., since C99/C++11
```

# Updates
<br>
