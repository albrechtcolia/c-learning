
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Token extractor.

int main (int argc, char *argv[])
{
    int   size  = sizeof(char) * 100;
    char *str   = (char *) malloc(size);
    char *occr  = (char *) malloc(size);
    char *token = (char *) malloc(size);

    // Checks malloc.
    if (!str || !occr || !token) {
        printf("malloc failed.\n");
        exit(-1);
    }

    memset(str, '\0', size);
    memset(token, '\0', size);
    memset(occr, '\0', size);

    sprintf(str, "Iesus Hominum Salvator");
    sprintf(occr, " ");

    for (int a = 0, b = 0, c = 0, flag = 0; ; a++) {
        // Finds occurrence.
        for (b = 0; occr[b] != '\0'; b++) {
            if (occr[b] == str[a+b])
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

                printf("Token = %s\n", token);
            }

            if (str[a] == '\0')
                break;

            a += b-1;
        }
        else {
            token[c] = str[a];
            c++;
        }
    }

    memset(str, '\0', size);
    memset(occr, '\0', size);
    memset(token, '\0', size);

    free(str);
    free(occr);
    free(token);

    return 0;
}


