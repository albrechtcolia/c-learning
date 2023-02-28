
#include <stdio.h>

int main (int argc, char *argv[])
{
   /**
    *   Loop - basic form.
    *
    *   Statement 1 - initialization
    *       Is executed one time and before
    *       the execution of the code block.
    *
    *   Statement 2 - condition
    *       Defines the condition for executing
    *       the code block.
    *
    *   Statement 3 - increment/decrement
    *       Is executed every time after the
    *       code block has been executed.
    */

    int a;

    for (a = 0; a == 0 || a == 1; a++)
        printf("Value: %d\n", a);

    printf("Value: %d\n", a);

    return 0;
}


