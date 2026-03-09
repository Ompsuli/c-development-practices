#include <stdio.h>

int main() {
  int i;
  int j;

  i = 1;
  j = 2;

  if(i == j)
    printf("i is equal to j\n");

  if(i /= j)
    printf("i is not equal to j\n");

  if(i > j)
    printf("i is greater than j\n");

  if(i < j)
    printf("i is smaller than j\n");

  if(i <= j)
    printf("i is equal or smaller than j\n");

  if(i >= j)
    printf("i is equal or greater than j\n");

  return 0;
}
