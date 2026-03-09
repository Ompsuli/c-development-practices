#include <stdio.h>

int main() {
  
  int i;

  //Basic arithmetics
  i = 1;
  i += 1;
  printf("Sum of i+1 is %d\n", i);

  i -= 1;
  printf("Substraction of i - 1 is %d\n", i);

  i *= 10;
  printf("Multiply of i * 10 is %d\n", i);

  i /= 2;
  printf("Divide of i / 2 is %d\n", i);

  i %= 5;
  printf("Mod of i \% 5 is %d\n", i);

  return 0;
}
