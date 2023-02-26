
#include <stdio.h>

int main (int argc, char *argv[])
{
    int a = 10, b = 20, c = 30;

    // And.
    if (a > b && b < c)
        printf("Option 1.\n");
    else
        printf("Option 2.\n");

    // Or.
    if (a > b || b < c)
        printf("Option 3.\n");
    else
        printf("Option 4.\n");

    // Not.
    if (!(a < b))
        printf("Option 5.\n");
    else
        printf("Option 6.\n");

    return 0;
}


