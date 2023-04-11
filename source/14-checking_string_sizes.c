
#include <stdio.h>

/**
 * Check if two strings are identical.
 */

int main (int argc, char *argv[])
{
    char str1[] = "Lorem";
    char str2[] = "Ipsum";

    // Calculates string sizes.
    int size1 = 0, size2 = 0, flag = 0;

    for( ; str1[size1] != '\0'; size1++);
    for( ; str2[size2] != '\0'; size2++);

    printf("Size 1: %d\n", size1);
    printf("Size 2: %d\n", size2);

    printf("\n");

    // Checking.
    if (size1 == size2) {
        for (int a = 0; a != size1; a++) {
            if (str1[a] != str2[a]) {
                flag = 0;
                break;
            }

            flag = 1;
        }

        if (size1 == 0)
            flag = 1;
    }

    if (flag)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}


