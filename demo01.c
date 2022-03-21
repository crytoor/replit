#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main () {

    char *string;

    string = (char *) (malloc(6*sizeof(char)));
    strcpy(string,"pass!");
    puts(string);

    return 0;
}
