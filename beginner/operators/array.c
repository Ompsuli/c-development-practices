#include <stdio.h>

void foo(int (*x)){
  printf("Passing variable: %p\n", x);
  printf("Size of array: %ld\n", sizeof x );
  printf("Size of int: %ld\n", sizeof(int));
  printf("Total array length in sep function: %ld\n", sizeof x  / sizeof(int)); //Sizeof x returns pointer, not int. This cause warning, but is intentional.
};

int main() {
  int i[4]; //Declare array
  int j;

  i[0] = 1;
  i[1] = 2;
  i[2] = 3;
  i[3] = 4;

  //Loop array
  printf("Loop starts here:\n");
  for (j = 0; j < 4; j++) {
    printf("%d\n", i[j]);
  };
  printf("Loop ends\n");

  //Initializer
  float f[4] = {1.234, [2]=2.049, 3.691};
  for (j = 0; j < 6; j++) {
    printf("Arrays index %d have number %f\n", j, f[j]);
  } //This array goes out of bound to demonstrate loops can go out of array length
  
  //Get length
  printf("\nArray length inside main: %ld\n", sizeof i  / sizeof(int));
  printf("Let pass array to function ->\n");
  foo(i);


  return 0;
}
