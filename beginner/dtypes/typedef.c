//This file is copy of structs.c
//We are implementing typedef practices in this file
#include <stdio.h>

//Made "unnamed" typedef struct with rename exam --> Eliminate repeating name
typedef struct {
  char *student;
  char grade;
  int points;
} exam;

// sturct exam *e --> exam *e - No need to all struct, because typedef renames the dtype prefix
void updateStruct(exam *e, int new_points) {
  /*
   (*e).points = new_points;
   Above is equal to arrow operator below
  */
  e->points = new_points;

  if (new_points > 9) {
    e->grade = 'A';
  }
  else if (new_points > 7) {
    e->grade = 'B';
  }
  else if (new_points > 4) {
    e->grade = 'C';
  }
  else if (new_points > 2) {
    e->grade = 'D';
  }
  else {
    e->grade = 'F';
  }
}

int main() {
  int i, j;

  //struct exam ... -> exam ... - We can see typedef effect here
  exam ompsuli = {
    .student = "Ompsuli",
    .grade = 'B',
    .points = 7
  };

  printf("Name: %s\n",ompsuli.student);
  printf("Grade: %c\n",ompsuli.grade);
  printf("Points: %d\n",ompsuli.points);

  updateStruct(&ompsuli, 3);
  printf("Struct after update:\n");
  printf("Name: %s\n",ompsuli.student);
  printf("Grade: %c\n",ompsuli.grade);
  printf("Points: %d\n",ompsuli.points);

  return 0;
}
