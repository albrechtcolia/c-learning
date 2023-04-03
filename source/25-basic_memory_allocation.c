
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int     size = sizeof(char) * 100;
    char   *ptr  = (char *) malloc(size);

    if (!ptr) {
        printf("Malloc failed.\n");
        exit(-1);
    }

    // Zero memory.
    for (int a = 0; a < 100; a++)
        ptr[a] = '\0';

    // Using 'ptr'.
    ptr[0] = 'G';
    ptr[1] = 'o';
    ptr[2] = 'd';
    ptr[3] = '\0';

    printf("ptr: %s\n", ptr);

    // Free memory.
    for (int a = 0; a < 100; a++)
        ptr[a] = '\0';

    free(ptr);

    return 0;
}


