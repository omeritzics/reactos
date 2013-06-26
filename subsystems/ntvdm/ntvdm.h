/*
 * COPYRIGHT:       GPL - See COPYING in the top level directory
 * PROJECT:         ReactOS Virtual DOS Machine
 * FILE:            ntvdm.h
 * PURPOSE:         Header file to define commonly used stuff
 * PROGRAMMERS:     Aleksandar Andrejevic <theflash AT sdf DOT lonestar DOT org>
 */

#ifndef _NTVDM_H_
#define _NTVDM_H_

/* INCLUDES *******************************************************************/

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

#define NDEBUG
#include <debug.h>

/* DEFINES ********************************************************************/

#define TO_LINEAR(seg, off) (((seg) << 4) + (off))
#define MAX_SEGMENT 0xFFFF
#define MAX_OFFSET 0xFFFF
#define MAX_ADDRESS TO_LINEAR(MAX_SEGMENT, MAX_OFFSET)
#define STEPS_PER_CYCLE 256

/* FUNCTIONS ******************************************************************/

extern LPVOID BaseAddress;
extern BOOLEAN VdmRunning;
extern LPCWSTR ExceptionName[];

VOID DisplayMessage(LPCWSTR Format, ...);

#endif

/* EOF */
