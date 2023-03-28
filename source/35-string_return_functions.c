
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Returning a character.
char func1 ()
{
    return 'a';
}

// Returning a dynamically allocated string.
char *func2 ()
{
    int   sz = sizeof(char) * 100;
    char *s  = (char *) malloc(sz);

    if (!s)
        return NULL;

    memset(s, '\0', sz);
    sprintf(s, "Iesus Salvator");

    return s;
}

int main (int argc, char *argv[])
{
    // Returning a character.
    int ch = func1();

    printf("ch: %c\n", ch);

    // Returning a dynamically allocated string.
    char *string = func2();

    if (!string) {
        printf("Malloc failed.\n");

        exit(-1);
    }

    printf("string: %s\n", string);

    memset(string, '\0', strlen(string));
    free(string);

    return 0;
}


