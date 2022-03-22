#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {

  char *string;

  string = (char *)(malloc(6 * sizeof(char)));

  while (1) {
    printf("Enter password:");
    gets(string);
    if (strcmp(string, "popo"))
      printf("Wrong Pass!\n");
    else {
      puts("Correct Pass!");
      break;
    }
  }

  // puts(string);
  return 0;
}
