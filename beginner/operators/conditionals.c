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
  
  if(i > 5 && j > 10) {
    printf("i is greater than 5 AND j is greater than 10\n");
  }
  else {
    printf("i is not greater than 5 OR/AND j is not greater than 10\n");
  };

  if(!(i > 5) || !(j > 10)) {
    printf("i is NOT greater than 5 OR j is NOT greater than 10\n");
  }
  else {
    printf("i is greater than 5 OR j is greater than 10\n");
  };

  return 0;
}
