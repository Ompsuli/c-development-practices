#include <stdio.h>
#include <stdlib.h>

int mallocBasic(void) {
  int *p = malloc(sizeof *p); //Sizeof by itself type. Int *p == sizeof(int)
  *p = 66;
  //p = NULL; //Uncomment to test error handling

  if (p == NULL) {
    printf("Error allocating pointer p\n");
    return 1;
  }

  printf("%d\n", *p);

  free(p);

  return 0;
}

int mallocArray(int count) {
  int i;
  int *pArr = malloc(sizeof *pArr * count);

  for (i = 0 ; i < count ; i++) {
    pArr[i] = i;
  }

  //pArr = NULL; //Uncomment to test error handling
  if (pArr == NULL) {
    printf("Error allocating pointer pArr");
    return 1;
  }

  for (i = 0 ; i < count ; i++){
    printf("pArr[%d]: %d\n", i, pArr[i]);
  }

  free(pArr);

  return 0;
}

int main() {
  mallocBasic();
  mallocArray(5);


  return 0;
}
