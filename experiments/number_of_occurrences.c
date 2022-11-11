
#include <stdio.h>

/**
 * It counts the number of occurrences of each digit, blank, tab, and newline.
 */

int main (int argc, char *argv[])
{
    int character, index, nblank, nother;
    int ndigit[10];

    for (index = 0; index < 10; index++)
        ndigit[index] = 0;

    nblank = nother = 0;
    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9')
            ++ndigit[character - '0'];
        else if (character == ' ' || character == '\t' || character == '\n')
            ++nblank;
        else
            ++nother;
    }

    printf("digits = \n");
    for (index = 0; index < 10; index++)
        printf("index[%d] = %d\n", index, ndigit[index]);

    printf("\n");
    printf("blanks = %d\n", nblank);
    printf("others = %d\n", nother);

    return 0;
}


