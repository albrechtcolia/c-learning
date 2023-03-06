
#include <stdio.h>

/**
 * Copy a string into another string.
 */

int main (int argc, char *argv[])
{
    char str1[] = "Iesus Hominum Salvator";
    // Definition goes from 1 to 100.
    char str2[100];

    // Access goes from 0 to 99.
    for (int a = 0; a < 100; a++)
        str2[a] = '\0';

    for (int a = 0; str1[a] != '\0'; a++)
        str2[a] = str1[a];

    printf("%s\n",str2);

    return 0;
}


