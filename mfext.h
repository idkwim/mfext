#ifndef __MFEXT_H__
#define __MFEXT_H__

#include <Windows.h>
#include <string.h>
#include <WDBGEXTS.H>
#include <ntverp.h>

#pragma warning(disable:4996)

#if _WIN64
#define KDEXT_64BIT
#else
#define KDEXT_32BIT
#endif

#ifdef _WIN64
#define STACKFRAME EXTSTACKTRACE64
#else
#define STACKFRAME EXTSTACKTRACE32
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif