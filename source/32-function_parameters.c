
#include <stdio.h>

// Declaration.
void func1 (int a)
{
    printf("func1() -> %d\n", a);
}

void func2 (int a, int b , int c)
{
    int d = a * b * c;

    printf("func2() -> %d * %d *%d = %d\n", a, b, c, d);
}

int main (int argc, char *argv[])
{
    // Function call.
    func1(10);
    func1(20);

    func2(10, 20, 30);

    return 0;
}


