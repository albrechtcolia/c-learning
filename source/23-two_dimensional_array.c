
#include <stdio.h>

/**
 * Two-dimensional array.
 */

int main (int argc, char *argv[])
{
    char ar [3][10];

    ar[0][0] = 'a';
    ar[0][1] = 'b';
    ar[0][2] = 'c';
    ar[0][3] = '\0';

    sprintf(ar[1], "Iesus");
    sprintf(ar[2], "Salvator");

    printf("%s\n", ar[0]);
    printf("%s\n", ar[1]);
    printf("%s\n", ar[2]);

    return 0;
}


