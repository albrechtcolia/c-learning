
#include <stdio.h>

int main (int argc, char *argv[]) {
    char string[100];
    int  a, b;

    // Reset string.
    for (int a = 0; a < 100 ; a++)
        string[a] = '\0';

    // Total lines.
    for (a = 0; a <= 15; a++) {
        if (a == 0) {
            // Total characters.
            for (b = 0; b <= 40; b++)
                string[b] = ' ';

            printf("%s\n", string);
        }

        if (a >= 1 && a <= 3) {
            for (b = 0; b <= 40; b++) {
                if (b == 20) {
                    string[b] = '|';
                    continue;
                }

                string[b] = ' ';
            }

            printf("%s\n", string);
        }

        if (a == 4) {
            for (b = 0; b <= 40; b++) {
                if (b >= 15 && b <= 25) {
                    string[b] = '-';
                    continue;
                }

                string[b] = ' ';
            }

            printf("%s\n", string);
        }

        if (a >= 5 && a <= 14) {
            for (b = 0; b <= 40; b++) {
                if (a == 7) {
                    if (b >= 1 && b <= 11 ||
                        b >= 29 && b <= 39)
                    {
                        string[b] = '-';
                        continue;
                    }
                }

                if (b == 6 || b == 20 || b == 34 ) {
                    string[b] = '|';
                    continue;
                }

                string[b] = ' ';
            }

            printf("%s\n", string);
        }

        if (a == 15) {
            for (b = 0; b <= 40; b++)
                string[b] = '-';

            printf("%s\n", string);
        }
    }

    return 0;
}


