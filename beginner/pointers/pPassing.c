#include <stdio.h>

void increment(int *pointer) {
  *pointer = *pointer + 1;
}

int main() {
  
  int i, *p;

  i = 5;
  p = &i;

  printf("Variable is %d before passing pointer to function\n", i);

  increment(p);

  printf("Variable is %d after passed pointer to function\n", i);

  return 0;
}
