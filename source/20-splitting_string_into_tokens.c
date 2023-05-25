
#include <stdio.h>

/**
 * Splitting a string into tokens.
 */

int main (int argc, char *argv[])
{
    char str[] = "In principio erat Verbum";
    char occr  = ' ';
    char token[50];

    for (int a = 0, b = 0; ; a++) {
        if (str[a] != occr && str[a] != '\0') {
            token[b] = str[a];
            b++;
        }

        else {
            if (b) {
                token[b] = '\0';
                b = 0;

                printf("> %s\n", token);
            }
        }

        if (str[a] == '\0')
            break;
    }

    return 0;
}


