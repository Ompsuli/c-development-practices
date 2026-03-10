#include <stdio.h>

//This file contais different flow controls of C.
int main() {

  int i = 3;
  int j = 10;

  //If-else statement
  //Style 1: One row without brackets {}
  if(i > 3) printf("i is greater than 3\n"); else printf("i is not greater than 3\n");

  //Style 2: 2 rows without brackets
  if(i > 5)
    printf("i is greater than 5\n");
  else
    printf("i is not greater than 5\n");

  //Style 3: Multiple rows with brackets. This is normal use case.
  if(i > 3) {
    //Multiple commands possible here
    printf("i is greater than 3\n");
    printf("This can print multiple lines for condition\n");
  }
  else if (i < 5) {
    printf("i is smaller than 5\n");
  }
  else {
    printf("i is greater than 3 or smaller than 5\n");
    printf("Also multiple lines in else-condition\n");
  }
  
  //Switch statement
  i = 0;
  //Less else-if-statement usage - Usage only if equal
  switch(i) {
    case 0:
      printf("0 goal\n");
      //Falling through!

    case 1:
      printf("1 goal\n");
      break;

    case 2: printf("2 goals\n"); break;
  }


  //For-loop
  for(i = 0; i < 3; i++) {
     printf("i = %d\n", i);
   }

  i = 0;
  
  //While-loop
  while(i<3) {
    printf("x is %d in while loop\n", i);
    i++;
  }

  //Forever-loop
  /*
   for(;;) {
   printf("Hit CTRL-C to stop");
   }
   */

return 0;
}
