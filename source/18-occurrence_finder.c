#include <stdio.h>

/**
 * Find occurrence in a string.
 */

int main (int argc, char *argv[])
{
    char str1[] = "Iesus Hominum Salvator";
    char str2[] = "Hominum";
    int  flag = 0;

    for (int a = 0; str1[a] != '\0'; a++) {
        for (int b = 0; str2[b] != '\0'; b++) {
            if (str2[b] == str1[a + b])
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }

        if (flag)
            break;
    }

    // Checking.
    if (flag)
        printf("Occurrence found.\n");
    else
        printf("Could not find the occurrence.\n");

    return 0;
}
