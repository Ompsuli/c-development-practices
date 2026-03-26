#include <stdio.h>
#include <stdbool.h>

int main() {

  //Integer
  int counter = 3;
  printf("I have repeat my task %d times\n", counter);
  
  //Float
  float price = 3.9;
  printf("Price is: %f\n", price);

  //Double
  double pi = 3.1415926535;
  printf("First 6 digits of pi: %f\n", pi);
  printf("First 10 digits of pi: %.10f\n", pi);

  //Character
  char nickname = 'O';
  printf("My Github nickname starts with letter %c\n", nickname);
  printf("My Github nickname int value is %d\n", nickname);

  //String == Char array
  char name[] = "Ompsuli";
  printf("And my full nickname is %s\n", name);
  
  //Boolean
  bool likeC = true;
  bool cIsEasy = false;
  printf("Do I like C language? %d\n", likeC);
  printf("Do I think C is easy? %d\n", cIsEasy);
  /* All above are signed dtypes */

  //Unsigned values cannot be negatives. Signed values can be negative and positive.
  signed int i = 999;
  printf("Signed int: %d\n", i);
  unsigned int u_i = 999;
  printf("Signed unsigned int: %d\n", u_i);
  short s_i = -99; // signed
  printf("Manual signed int: %d\n", s_i);
  long l_i = 999; // signed
  printf("Long int: %ld\n", l_i);
  long long ll_i = 9999; //signed
  printf("Long long int: %lld\n", ll_i);
  double d_i = 1.234567;
  printf("double int: %f\n", d_i);
  long double ld_i = 0.0012345;
  printf("Long double int: %Lf\n", ld_i); //Show only 5 meaningful digits

  return 0;
}
