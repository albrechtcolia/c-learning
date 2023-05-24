
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Finds string occurrence.

int main (int argc, char *argv[])
{
    int   flag = 0;
    int   size = sizeof(char) * 100;
    char *str = (char *) malloc(size);
    char *occr = (char *) malloc(size);

    // Malloc failure check.
    if (!str || !occr) {
        printf("malloc failed.\n");
        exit(-1);
    }

    // Reset 'str' and 'occr'.
    memset(str, '\0', size);
    memset(occr, '\0', size);

    // String assignment.
    sprintf(str, "Jesus Hominum Salvator");
    sprintf(occr, "Salvator");

    // Finds occurrence.
    for (int a = 0; str[a] != '\0'; a++) {
        for (int b = 0; occr[b] != '\0'; b++) {
            if (occr[b] != str[a + b]) {
                flag = 0;
                break;
            }

            flag = 1;
        }

        if (flag)
            break;
    }

    // Occurrence check.
    if (flag)
        printf("Occurrence found.\n");
    else
        printf("Could not find the occurrence.\n");

    // Reset 'str' and 'occr'.
    memset(str, '\0', size);
    memset(occr, '\0', size);

    // Freeing memory.
    free(str);
    free(occr);

    return 0;
}


