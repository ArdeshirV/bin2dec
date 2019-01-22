/* bin2dec.h: Binary to Decimal Convertor 4.0                                 */
/* Copyright (c) 2015-2019 e-job@protonmail.com, Licensed under GPLv3+        */
#include <stdio.h>
#include <string.h>
/*----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0
#define C_ERROR "\033[1;31m"  /* Error: Bold Red                              */
#define C_WARNING "\033[0;31m"/* Warning: Red                                 */
#define C_NORMAL "\033[0m"    /* Normal Text: White                           */
#define C_USER "\033[1;32m"   /* User Input: Bold Green                       */
#define C_USER "\033[0;32m"   /* Reprinting User Input in Output: Green       */
#define C_RESULT "\033[0;35m" /* Result and Output: Magenta                   */
#define C_TITLE "\033[0;37m"  /* Title: Yellow                                */
#define C_INFO "\033[1;37m"   /* Information of Title: Bold Yellow or Brown   */
/*----------------------------------------------------------------------------*/
typedef unsigned long ulong;
typedef unsigned char boolean;
/*----------------------------------------------------------------------------*/
//ulong powers[128];
ulong power2(ulong num);
ulong Bin2Dec(char[], int);
boolean IsValidBinary(char[], int);
void PrintTitle(char[], const char[], const char[],
                const char[], boolean color);
void PrintCopyright(char[], const char[], const char[],
                const char[], boolean color);
/*----------------------------------------------------------------------------*/

