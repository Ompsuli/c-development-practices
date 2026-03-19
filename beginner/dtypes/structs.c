#include <stdio.h>

int main() {
  int i, j;

  struct exam {
    char *student;
    char grade;
    int points;
  };

  struct exam ompsuli = {
    .student = "Ompsuli",
    .grade = 'B',
    .points = 7
  };

  printf("Name: %s\n",ompsuli.student);
  printf("Grade: %c\n",ompsuli.grade);
  printf("Points: %d\n",ompsuli.points);

  return 0;
}
