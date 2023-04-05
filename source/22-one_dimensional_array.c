
#include <stdio.h>

/**
 * One-dimensional array.
 */

int main (int argc, char *argv[])
{
    // Char.
    char str[100];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    printf("str = %s\n", str);

    // Int.
    int num[100];

    num[0] = 100;
    num[1] = 200;
    num[2] = 300;

    printf("num = %d\n", num[0]);
    printf("num = %d\n", num[1]);
    printf("num = %d\n", num[2]);

    // Float.
    float digs[100];

    digs[0] = 1.100;
    digs[1] = 2.200;
    digs[2] = 3.300;

    printf("digs = %f\n", digs[0]);
    printf("digs = %f\n", digs[1]);
    printf("digs = %f\n", digs[2]);

    return 0;
}


