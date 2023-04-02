
#include <stdio.h>
#include <string.h>
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
    memset(ptr, '\0', size);

    // Using 'ptr'.
    sprintf(ptr, "Iesus");
    printf("ptr: %s\n", ptr);

    // Free memory.
    memset(ptr, '\0', size);
    free(ptr);

    return 0;
}


