#include <stdio.h>

int main() {
  int i;
  int j;
  int x = 10;
  int y = 7;

  //Trenary operator
  i += x > 10? 5: 7;
  printf("i is %d\n", i);
  printf("x is %s\n", x % 2 == 0? "odd": "even");

  //Act same as if-else. Not performing same way.
  if(x > 10) {
  x += 5;
  }
  else {
  x += 7;
  };

  //Increment-Descrement
  printf("Before increments and descrements i is %d\n", i);
  printf("Printed with i++ i is %d\n", i++);

  printf("Printed with ++i i is %d\n", ++i);
  printf("After ++i i is %d\n", i);

  printf("Printed with i-- i is %d\n", i--);

  printf("Printed with --i i is %d\n", --i);
  printf("After --i i is %d\n", i);

  //Comma
  i = 5, j = 7;
  printf("x is %d and y is %d\n", x, y);

  //Use-cases normally in loops
  for(i,j ; i < 10 ; i++, j++) {
  printf("i is %d and j is %d\n", i, j);
  };

  //sizeof
  char a = 'O';
  char name[] = "Ompsuli";
  float pi = 3.14;

  printf("Size of int: %zu\n", sizeof(i));
  printf("Size of char: %zu\n", sizeof(a));
  printf("Size of char array: %zu\n", sizeof(name));
  printf("Size of float: %zu\n", sizeof(pi));

  return 0;
}
