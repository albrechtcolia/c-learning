
#include <stdio.h>

#define debug(FMT, ...)                 \
    do {                                \
        /* ... */                       \
        printf(FMT, ##__VA_ARGS__);     \
    } while(0)


int main (int argc, char *argv[])
{
    int a = 10;

    if(a)
        debug("Value: %d\n", a);
    else
        printf("No option.\n");

    return 0;
}


