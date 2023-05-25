
#include <stdio.h>

/**
 * Splitting a string into tokens,
 * when the token is a string.
 */

int main (int argc, char *argv[])
{
    char str[] = "+++In+++principio+++erat+++Verbum";
    char ocr[] = "+++";
    char token[100];

    for (int a = 0, b = 0, c = 0, flag = 0; ; a++) {
        for (b = 0; ocr[b] != '\0'; b++) {
            if (ocr[b] == str[a + b])
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }

        if (flag || str[a] == '\0') {
            if (c) {
                token[c] = '\0';
                c = 0;

                printf("Token: %s\n", token);
            }

            if (str[a] == '\0')
                break;

            a += (b-1);
        }

        else {
            token[c] = str[a];
            c++;
        }
    }

    return 0;
}


