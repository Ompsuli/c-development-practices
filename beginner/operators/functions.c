#include <stdio.h>

int foo(int);
int bar(int a) {
  return a + 2;
};

int main() {
  int i;
  int j;

  printf("i = %d\n", i);

  i = foo(i);
  printf("i = %d\n", i);

  i = bar(i);
  printf("i = %d\n", i);

  //This cause error if not commented
  //i = funcHorror();
  //printf("%d\n", i);

  return 0;
};

int foo(int a) {
  return ++a;
}

//This function cause error because it's not before main
int funcHorror(void) {
  return 123;
}
