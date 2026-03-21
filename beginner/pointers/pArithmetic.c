#include <stdio.h>
#include <string.h>

int myStrLen(char *s) {
  char *p = NULL;
  p = s;

  while(*p != '\0') {
    p++;
  }

  // s = start of pointer address - p = end of pointer address
  return p - s;
}

int main() {
  int a[6] = {11, 22, 33, 44, 55, 9999};
  int b[6];
  int i;
  char *s = "Testing the C world";
  char t[99];
  
  void *pVoid = s;
  char *pChar = s;
  int *p = &a[0];
  

  printf("%d\n", *p);
  printf("%d\n", *(p + 1));
  printf("%d\n", *(p + 0));

  printf("\nHere starts loops:\n");
  for(i = 0; i < 6 ;i++) {
    printf("%d\n", *(p+i));
  }

  while(*p != 9999) {
    printf("%d\n", *p);
    p++;
  }

  printf("\nStart of myStrLen test:\n");
  printf("%d\n", myStrLen("Hello world!"));
  printf("%d\n", myStrLen(s));

  printf("\nStart of memcpy tests:\n");
  memcpy(t, s, myStrLen(s)+1);
  printf("%s\n", t);

  memcpy(b, a, 6 * sizeof(int));
  printf("b[1]: %d (= 22)\n", b[1]);

  printf("\nVoid pointer tests:\n");
  printf("pChar: %c\n", *pChar);
  //printf("pVoid %s\n", *pVoid); // Gives error

  return 0;
}
