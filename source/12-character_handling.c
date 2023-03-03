
#include <stdio.h>

int main (int argc, char *argv[])
{
    char str[] = "Iesus";
    int  index;

    // Prints every character of my string.
    for (index = 0; str[index] != '\0'; index++)
        printf("%c ", str[index]);

    printf("\n");

    printf("Before: %s\n", str);

    // Defines each character of my string as '\0'.
    for (index = 0; str[index] != '\0'; index++)
        str[index] = '\0';

    printf("After: %s\n", str);

    return 0;
}


