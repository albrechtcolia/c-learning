
// Load the system includes.
#include <stdio.h>

// Load the 'header.h' from the local file.
#include "header.h"

int main(int argc, char *argv[])
{
    int a = GLOBAL_VALUE; // Value loaded from header.

    printf("Valor: %d\n", a);

    return 0;
}