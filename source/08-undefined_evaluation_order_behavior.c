
#include <stdio.h>

/**
 * This is an unspecified behavior.
 * The standard does not say what order arguments
 * should be evaluated in, this is a compiler decision.
 *
 * In this case, it processes the arguments right to left
 * instead of the expected left to right.
 */

int main (int argc, char *argv[])
{
    int a = 10, b = 20, c = 30;

    // 1 - Value check.
    // 2 - Increment.
    if (b == ++b)
        printf("Test 1 : %d\n", b);

    b = 20;

    // 1 - Increment.
    // 2 - Value check.
    if (b != b++)
        printf("Test 2 : %d\n", b);

    b = 20;

    // Example.
    if (a > b || ((b != b++) || c < a))
        printf("Option 1 : %d\n", b);
    else
        printf("Option 2 : %d\n", b);

    return 0;
}


