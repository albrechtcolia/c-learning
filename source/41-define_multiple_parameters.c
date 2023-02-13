
#include <stdio.h>

#define my_printf(FMT, ...) printf(FMT, ##__VA_ARGS__);

int main (int argc, char *argv[]) {
    int a = 10, b = 20;

    my_printf("Value: %d + %d = %d\n", a, b, (a + b))

    return 0;
}


