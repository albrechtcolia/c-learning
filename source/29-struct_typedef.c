
#include <stdio.h>
#include <string.h>

struct data_s {
    int  age;
    char name[100];
};

typedef struct data_s data_t;

int main (int argc, char *argv[])
{
    data_t data = {
        .age = 0,
        .name = "Iesus"
    };

    printf("data: %d, %s\n", data.age, data.name);

    return 0;
}


