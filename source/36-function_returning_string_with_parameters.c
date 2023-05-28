
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *func1 (char *param)
{
    int   sz  = sizeof(char) * 100;
    char *s   = (char *) malloc(sz);

    if (!s)
        return NULL;

    memset(s, '\0', sz);
    sprintf(s, "Iesus %s", param);

    return s;
}

int main (int argc, char *argv[])
{
    char *str = func1("Salvator <3");

    if (str) {
        printf("func1(): %s\n", str);

        memset(str, '\0', strlen(str));
        free(str);
    }

    return 0;
}


