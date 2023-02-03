
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_s {
    int  age;
    char name[100];
};

typedef struct data_s data_t;

int main (int argc, char *argv[])
{
    data_t *data2;
    int     size;

    // Allocate struct size.
    size    = sizeof(data_t);
    data2   = (data_t *) malloc(size);

    if (!data2) {
        printf("Malloc failed.\n");
        exit(-1);
    }

    memset(data2, 0, size);

    // Using.
    data2->age  = 20;
    sprintf(data2->name, "Salvator");

    printf("data2: %d, %s\n", data2->age, data2->name);

    // Free memory.
    memset(data2, 0, size);
    free(data2);

    return 0;
}


