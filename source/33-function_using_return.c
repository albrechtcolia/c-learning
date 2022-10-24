
#include <stdio.h>

// Declaration.
int func1 (int a, int b)
{
    int n = a + b;

    return n;
}

int main (int argc, char *argv[])
{
    // Function call.
    int a = func1(10, 20);

    printf("Value: %d\n", a);

    return 0;
}


