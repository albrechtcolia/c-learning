
#include <stdio.h>

int main (int argc, char *argv[])
{
    // Example 1.
    char ch    = 'a';
    char str[] = "Iesus";

    if ('a' == ch)
        printf("Option 1.\n");

    if (str[0] == 'I' &&
        str[1] == 'e' &&
        str[2] == 's' &&
        str[3] == 'u' &&
        str[4] == 's')

        printf("Option 2.\n");

    // Example 2.
    int a = 0;

    if (str[a++] == 'I')
        printf("Option 3.\n");

    a = 0;
    if (str[++a] == 'e')
        printf("Option 4.\n");

    return 0;
}


