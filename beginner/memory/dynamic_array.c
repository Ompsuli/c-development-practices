#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *readChar(char *pString) {
  char *buffer = malloc(strlen(pString) + 1);
  char *tmp;


  strcpy(buffer, pString);
  printf("Here start the loop:\n");

  while(strlen(buffer) > 0) {
    printf("%c", buffer[0]);

    size_t len = strlen(buffer);

    for (int i = 0; i < len; i++) {
      buffer[i] = buffer[i + 1];
    }

    tmp = realloc(buffer, len);
    //Error check tmp pointer
    if (tmp == NULL) {
      free(buffer);
      exit(1);
    }

    buffer = tmp;

  }

  free(buffer);

  return 0;
}

char *readLine(FILE *pFile) {
  int c; // Character we are reading
  char *buffer;
  int sizeBuffer = 4;
  int offset = 0;

  buffer = malloc(sizeBuffer);
  if(buffer == NULL) {
    return NULL;
  }

  while(c = fgetc(pFile), c != '\n' && c != EOF) {
    //New buffersize if offset is too big
    if(offset == sizeBuffer - 1) {
      sizeBuffer *= 2;

      char *newBuffer = realloc(buffer, sizeBuffer);

      if(newBuffer == NULL) {
        free(buffer);
        return NULL;
      }

      buffer = newBuffer;
    }

    //Add character to buffer
    buffer[offset++] = c;
    
    }

  //EOF and no bytes to read
  if(c == EOF && offset == 0) {
    free(buffer);
    return NULL;
  }

  //Shrink buffer
  if(offset < sizeBuffer - 1) {
    char *newBuffer = realloc(buffer, offset + 1);
    
    if(newBuffer != NULL) {
      buffer = newBuffer;
    }

  }

  //Add NUL terminator to end
  buffer[offset] = '\0';


  return buffer;
}

int main() {
  /*
    * Create array with X number of items. Ex. s[]
    * Pass array to function
    * Function takes item to pointer -> Print first (or last) item/line -> Realloced memory to optimze
  */

  char s[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit posuere.\nLorem ipsum dolor sit amet, consectetur adipiscing elit posuere.\n";
  FILE *pf = fopen("bar.txt", "r");
  char *line;

  readChar(s);
  
  while((line = readLine(pf)) != NULL) {
    printf("%s\n", line);
    free(line);
  }
  fclose(pf);

  return 0;
}
