
#include <stdio.h>

/**
 * Reverse copy a string.
 */

int main (int argc, char *argv[])
{
    char str1[] = "Iesus";
    char str2[100];
    int  size;

    // Reset 'str2'.
    for (int a = 0; a < 100 ; a++)
        str2[a] = '\0';

    // Get the size of 'str1'.
    for (size = 0; str1[size] != '\0'; size++);

    // Copy 'str1' into 'str2' in reverse.
    for (int a = 0, b = size-1; str1[a] != '\0'; a++, b--)
        str2[a] = str1[b];

    printf("str: %s, %s\n", str1, str2);

    return 0;
}


