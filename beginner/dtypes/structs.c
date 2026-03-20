#include <stdio.h>

struct exam {
  char *student;
  char grade;
  int points;
};

void updateStruct(struct exam *e, int new_points) {
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

  struct exam ompsuli = {
    .student = "Ompsuli",
    .grade = 'B',
    .points = 7
  };

  printf("Name: %s\n",ompsuli.student);
  printf("Grade: %c\n",ompsuli.grade);
  printf("Points: %d\n",ompsuli.points);

  updateStruct(&ompsuli, 10);
  printf("Struct after update:\n");
  printf("Name: %s\n",ompsuli.student);
  printf("Grade: %c\n",ompsuli.grade);
  printf("Points: %d\n",ompsuli.points);

  return 0;
}
