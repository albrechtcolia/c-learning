
#include <stdio.h>

#define PRINT_ALL_VARIABLES         \
    int c = a + b;                  \
                                    \
    printf("Valor 1: %d\n", a);     \
    printf("Valor 2: %d\n", b);     \
    printf("Valor 3: %d\n", c);

int main (int argc, char *argv[]) {
    int a = 10, b = 20;

    PRINT_ALL_VARIABLES

    return 0;
}


