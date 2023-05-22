
#include <stdio.h>

int main (int argc,char *argv[])
{
    int a = 10, b = 20, c = 30;

    // Equal.
    if (a == b)
        printf("A is equal to B.\n");
    else if (a == c)
        printf("A is equal to C.\n");
    else
        printf("No valid option.\n");

    printf("\n");

    // Not equal.
    if (a != b)
        printf("A is not equal to B.\n");
    else
        printf("A is equal to B.\n");

    return 0;
}


