/* bin2dec.c: Binary to Decimal Convertor 4.0                                 */
/* Copyright (c) 2015-2019 ardeshirv@protonmail.com, Licensed under GPLv3+    */
/*----------------------------------------------------------------------------*/
#include "bin2dec.h"
/*----------------------------------------------------------------------------*/
int main(int argc, char *argv[]) {
  int len;
  char chrArrBuff[256];
  const boolean blnColor = TRUE;
  const char strAppName[] = "bin2dec";
  const char strAppYear[] = "2015-2019";
  const char strAppDescription[] = "Binary to Decimal Convertor";
  const char strVersion[] = "4.0";
  const char strLicense[] = "GPLv3+";
  const char strCopyright[] = "ardeshirv@protonmail.com";

  if(argc >= 2) {
    strcpy(chrArrBuff, argv[1]);
  } else {
    PrintTitle(chrArrBuff, strAppName, strAppDescription, strVersion, blnColor);
    printf("%s", chrArrBuff);
    PrintCopyright(chrArrBuff, strAppYear, strCopyright, strLicense, blnColor);
    printf("%s", chrArrBuff);
    printf("\033[0;36mEnter a binary number(use only \033[1;36m0\033[0;36m"
           " and \033[1;36m1\033[0;36m): \033[1;32m");
    if(scanf("%s", chrArrBuff) < 0) {
      printf("\033[0;31mYou didn't enter a valid binary number.\n\033[0m");
      return -1;
    }
    printf("\033[0m");
  }
  len = strlen(chrArrBuff);

  if(IsValidBinary(chrArrBuff, len)) {
    ulong Result = Bin2Dec(chrArrBuff, len);
    if(argc >= 2) {
      //printf("\033[0;35m%lu\n\033[0m", Result);
      sprintf(chrArrBuff, "expr %lu", Result);
      return system(chrArrBuff);
    } else
      printf("\033[0mBinary(\033[0;32m%s\033[0m) = "
      "Decimal(\033[0;35m%lu\033[0;37m)\n\033[0m", chrArrBuff, Result);
  } else
    printf("\033[0;31mYour input value is not a valid binary number.\n\033[0m");

  printf("\033[0m");
  return 0;
}
/*----------------------------------------------------------------------------*/
inline ulong power2(ulong num) {
  return 1 << num;
}
/*----------------------------------------------------------------------------*/
ulong Bin2Dec(const char arr[], const int len) {
  int i, value;
  ulong result = 0;

  for(i = len - 1, value = 0; i >= 0; i--, value++)
    result += (arr[i] == '1')? power2(value): 0;

  return result;
}
/*----------------------------------------------------------------------------*/
boolean IsValidBinary(const char arr[], const int len) {
  int i;
  boolean result = TRUE;

  for(i = 0; i < len; i++) {
    if(arr[i] == '\0')
      break;  // printf("arr[%d] = \'%c\'\n", i, arr[i]);
    else if(arr[i] != '0' && arr[i] != '1') {
      result = FALSE;
      break;
    }
  }
  return result;
}
/*----------------------------------------------------------------------------*/
void PrintTitle(char chrArrBuff[], const char AppName[],
                       const char AppDescription[], const char AppVersion[],
                       const boolean color) {
    const char NoneColored[] = "%s - %s Version %s\n";
    const char Colored[] = "\033[1;33m%s\033[0;33m - %s "
                           "\033[1;33mVersion %s\033[0m\n";
    const char* strFormat[] = {NoneColored, Colored};
    sprintf(chrArrBuff, strFormat[color], AppName, AppDescription, AppVersion);
}
/*----------------------------------------------------------------------------*/
void PrintCopyright(char chrArrBuff[], const char AppYear[],
                          const char AppCopyright[], const char AppLicense[],
                          const boolean color) {
    const char NoneColored[] = "Copyright (c) %s %s, Licensed under %s\n\n";
    const char Colored[] = "\033[0;33mCopyright (c) \033[1;33m%s \033[1;34m%s"
                           "\033[0;33m, Licensed under \033[1;33m%s\033[0;33m"
                           "\033[0m\n\n";
    const char* const strFormat[] = {NoneColored, Colored};
    sprintf(chrArrBuff, strFormat[color], AppYear, AppCopyright, AppLicense);
}
/*----------------------------------------------------------------------------*/
