
#include <stdio.h>
#include <string.h>

struct data {
    int  age;
    char name[100];
};

int main (int argc, char *argv[])
{
    // Initialize all members.
    struct data dt1 = {
        .age  = 10,
        .name = "Iesus"
    };

    // Does not initialize all members.
    struct data dt2 = {
        .age  = 20
    };

    memset(dt2.name, '\0', 100);

    printf("1 -> %d, %s\n", dt1.age, dt1.name);
    printf("2 -> %d, %s\n", dt2.age, dt2.name);

    return 0;
}


