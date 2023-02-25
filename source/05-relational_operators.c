
#include <stdio.h>

int main (int argc,char *argv[])
{
    int a = 10, b = 20;

    // Greater/less than or equal to.
    if (a >= b)
        printf("A is greater than or equal to B.\n");
    else if (a <= b)
        printf("A is less than or equal to B.\n");

    printf("\n");

    // Greater/less than.
    if (a > b)
        printf("A is greater than B.\n");
    else if (a < b)
        printf("A is less than B.\n");

    return 0;
}


