
#include <stdio.h>

/**
 * Splitting a string into tokens.
 */

int main (int argc, char *argv[])
{
    char str[] = "In principio erat Verbum";
    char ocr   = ' ';
    char str2[50];

    for (int a = 0, b = 0; ; a++) {
        if (str[a] != ocr && str[a] != '\0') {
            str2[b] = str[a];
            b++;
        }

        else {
            if (b) {
                str2[b] = '\0';
                b = 0;

                printf("> %s\n", str2);
            }
        }

        if (str[a] == '\0')
            break;
    }

    return 0;
}


