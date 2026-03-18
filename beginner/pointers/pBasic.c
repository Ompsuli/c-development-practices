#include <stdio.h>

void pStrings(void) {
  char s[] = "Hello world";
  char *pString;

  pString = s;
  printf("This is value s[]: %s and address: %p\n", s, &s);
  printf("This is from pointer: %s and address: %p\n", pString, pString);
}

int main() {
  //Assign int num and int pointer pNum
  int num, *pNum;

  num = 10;
  pNum = &num;
  printf("Num is %d\n", num);
  printf("Num address is %p\n", &num);
  printf("Pointer address is %p\n", pNum);
  *pNum = 666;
  printf("Pointer value is %d\n", *pNum);
  printf("Num is %d\n", num);

  pStrings();
  

  return 0;
}
