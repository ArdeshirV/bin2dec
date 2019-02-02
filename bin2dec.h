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
#define C_INPUT "\033[0;32m"  /* Reprinting User Input in Output: Green       */
#define C_RESULT "\033[0;35m" /* Result and Output: Magenta                   */
#define C_TITLE "\033[0;37m"  /* Title: Yellow                                */
#define C_INFO "\033[1;37m"   /* Information of Title: Bold Yellow or Brown   */
#define C_QUES "\033[0;36m"   /* Questions and Input Request: Light Blue      */
#define C_BQUES "\033[1;36m"  /* Bold Questions: Bold Light Blue              */
/*----------------------------------------------------------------------------*/
typedef unsigned long ulong;
typedef unsigned char boolean;
/*----------------------------------------------------------------------------*/
ulong power2(ulong num);
ulong Bin2Dec(const char[], const int);
boolean IsValidBinary(const char arr[], const int len);
void PrintTitle(char[], const char[], const char[],
                const char[], const boolean color);
void PrintCopyright(char[], const char[], const char[],
                const char[], const boolean color);
/*----------------------------------------------------------------------------*/

