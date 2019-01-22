/* bin2dec.h: Binary to Decimal Conversion 4.0                                */
/* Copyright (c) 2015 e-job@protonmail.com, Licensed under GPLv3+             */
#include <stdio.h>
#include <string.h>
//------------------------------------------------------------------------------
#define TRUE 1
#define FALSE 0
#define EN_STR "\033[0m"
#define ST_USER "\033[0;32m"
#define ST_ERROR "\033[0;31m"
#define ST_SPLASH "\033[1;37m"
#define ST_RESULT "\033[0;35m"
//------------------------------------------------------------------------------
typedef unsigned int ulong;
typedef unsigned char boolean;
//------------------------------------------------------------------------------
//ulong powers[128];
ulong power2(ulong num);
ulong Bin2Dec(char[], int);
boolean IsValidBinary(char[], int);
void PrintTitle(char[], const char[], const char[],
                       const char[], boolean color);
void PrintCopyright(char[], const char[], const char[],
                           const char[], boolean color);
//------------------------------------------------------------------------------
