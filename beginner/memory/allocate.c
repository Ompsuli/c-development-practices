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

  printf("\nArray malloc starts here\n");

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

int reAllocate(int count) {
  int i, *pNew;
  int *p = malloc(sizeof *p * count);
  int reCount = count;
  reCount *= 2;

  printf("\nReallocating starts here\n");

  for (i = 0 ; i < count ; i++) {
    p[i] = i;
  }

  if (p == NULL) {
    printf("Error allocating pointer p\n");
    return 1;
  }

  for (i = 0 ; i < count ; i++){
    printf("p[%d]: %d\n", i, p[i]);
  }

///////////////////////////////////
  
  pNew = realloc(p, sizeof *p * reCount);

  if (pNew == NULL) {
    printf("Error reallocating pointer p\n");
    return 1;
  }

  p = pNew;

  for (i = 0 ; i < reCount ; i++) {
    p[i] = i;
  }
  
  printf("Reallocated array:\n");

  for (i = 0 ; i < reCount ; i++){
    printf("p[%d]: %d\n", i, p[i]);
  }

  free(p);

  return 0;
}

int main() {
  int i = 5;

  mallocBasic();
  mallocArray(i);
  reAllocate(i);


  return 0;
}
