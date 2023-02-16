
// Load the system includes.
#include <stdio.h>

// Load the 'header.h' from the local file.
#include "header.h" 

int main(int argc, char *argv[])
{
    int  a      = GLOBAL_VALUE; // Value loaded from header.
    char str[]  = MY_STR;

    printf("Str: %s\n", str);
    printf("Value: %d\n", calc(a, 20));

    return 0;
}