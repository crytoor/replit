#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {

  char *string;

  string = (char *)(malloc(6 * sizeof(char)));
  strcpy(string, "DCBA!");
  puts(string);

  while (1) {
    puts("Enter password:");
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
