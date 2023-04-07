
#include <stdio.h>

int main (int argc, char *argv[])
{
    /**
     * Break example.
     *  Interrupts the execution of the loop,
     *  ignoring all following code.
     */

    for (int a = 0; a < 10; a++) {
        printf("1 - Value: %d\n", a);

        if (a == 5) {
            printf("Ending the loop.\n");
            break;
        }
    }

    printf("\n");

    /**
     * Continue example.
     *  It does not stop the execution of
     *  the loop, but ignores all following code.
     */

    for (int a = 0; a < 10; a++) {
        if (a == 5) {
            printf("Skip 5.\n");
            continue;
        }

        printf("2 - Value: %d\n", a);
    }

    return 0;
}


