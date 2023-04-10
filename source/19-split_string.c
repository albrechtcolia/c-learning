
#include <stdio.h>

/**
 * Split a string into two.
 */

int main (int argc, char *argv[])
{
    char str1[] = "Jesus Christ";
    char str2[100], str3[100];
    int  size;

    // Reset 'str2' and 'str3'.
    for (int a = 0; a < 100; a++) {
        str2[a] = '\0';
        str3[a] = '\0';
    }

    // Get the size of 'str1' without the '\0'.
    for (size = -1; str1[size+1] != '\0'; size++);

    // Splits 'str1' into two strings.
    for (int a = 0, b = 0; str1[a] != '\0'; a++) {
        if (a <= (size/2))
            str2[a] = str1[a];

        else {
            str3[b] = str1[a];
            b++;
        }
    }

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}


