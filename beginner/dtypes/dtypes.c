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

  //String == Char array
  char name[] = "Ompsuli";
  printf("And my full nickname is %s\n", name);
  
  //Boolean
  bool likeC = true;
  bool cIsEasy = false;
  printf("Do I like C language? %d\n", likeC);
  printf("Do I think C is easy? %d\n", cIsEasy);

  return 0;
}
