
#include <stdio.h>

#define PRINT_ALL_VARIABLES         \
    int c = a + b;                  \
                                    \
    printf("Value 1: %d\n", a);     \
    printf("Value 2: %d\n", b);     \
    printf("Value 3: %d\n", c);

int main (int argc, char *argv[])
{
    int a = 10, b = 20;

    PRINT_ALL_VARIABLES

    return 0;
}


