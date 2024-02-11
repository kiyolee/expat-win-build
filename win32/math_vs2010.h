#pragma once

#if defined(_MSC_VER) && _MSC_VER < 1700 // VS2010 or before

#include <math.h>

#define _HUGE_ENUF  1e+300
#define INFINITY    ((float)(_HUGE_ENUF * _HUGE_ENUF))
#define NAN         (-(float)(INFINITY * 0.0F))

static __inline int isnan(float f) {
#if defined(_M_AMD64)
    return _isnanf(f);
#elif defined(_M_IX86)
#pragma message("VS2010: Need to implement isnan().")
    return 0;
#endif
}

static __inline float strtof(char const* _String, char** _EndPtr) {
#pragma message("VS2010: Need to implement strtof().")
    return 0;
}

static __inline float wcstof(wchar_t const* _String, wchar_t** _EndPtr) {
#pragma message("VS2010: Need to implement wcstof().")
    return 0;
}

static __inline unsigned long long strtoull(char const* _String, char** _EndPtr, int _Radix) {
#pragma message("VS2010: Need to implement strtoull().")
    return 0;
}

static __inline unsigned long long wcstoull(wchar_t const* _String, wchar_t** _EndPtr, int _Radix) {
#pragma message("VS2010: Need to implement wcstoull().")
    return 0;
}

#endif // VS2010 or before
