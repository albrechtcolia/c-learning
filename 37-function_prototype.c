
#include <stdio.h>

// Function prototype.
int func (int a, int b);

int main (int argc, char *argv[])
{
    int a = func(10, 20);

    printf("Value : %d\n", a);

    return 0;
}

// The function itself.
int func (int a, int b)
{
    return a + b;
}


