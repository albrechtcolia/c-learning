
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Finds string occurrence.

int main (int argc, char *argv[])
{
    int   flag = 0;
    int   size = sizeof(char) * 100;
    char *str1 = (char *) malloc(size);
    char *str2 = (char *) malloc(size);

    // Malloc failure check.
    if (!str1 || !str2) {
        printf("malloc failed.\n");
        exit(-1);
    }

    // Reset 'str1' and 'str2'.
    memset(str1, '\0', size);
    memset(str2, '\0', size);

    // String assignment.
    sprintf(str1, "Jesus Salvador dos Homens");
    sprintf(str2, "Salvador");

    // Finds occurrence.
    for (int a = 0; str1[a] != '\0'; a++) {
        for (int b = 0; str2[b] != '\0'; b++) {
            if (str2[b] != str1[a + b]) {
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

    return 0;
}


