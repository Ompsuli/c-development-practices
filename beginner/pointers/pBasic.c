#include <stdio.h>

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
  

  return 0;
}
