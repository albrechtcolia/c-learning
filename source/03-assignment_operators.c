
#include <stdio.h>

int main (int argc, char *argv[])
{
    // Basic operators.
    int number = 10;

    printf("1 - Value: %d\n", number);

    number++;
    printf("1 - Value: %d\n", number);

    number--;
    printf("1 - Value: %d\n\n", number);

    // Pre-increment.
    number = 10;

    printf("2 - Value: %d\n", ++number);
    printf("2 - Value: %d\n\n", number);

    // Post-increment.
    number = 10;

    printf("3 - Value: %d\n", number++);
    printf("3 - Value: %d\n\n", number);

    // Assignment operators.
    number = 10;

    number += 10;
    printf("4 - Value: %d\n", number);

    number -= 5;
    printf("4 - Value: %d\n", number);

    number = number + 5;
    printf("4 - Value: %d\n", number);

    number *= 3;
    printf("4 - Value: %d\n", number);

    number /= 3;
    printf("4 - Value: %d\n", number);

    return 0;
}


