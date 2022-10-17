
#include <stdio.h>
#include <string.h>

struct data {
    int  age;
    char name[100];
};

int main (int argc, char *argv[])
{
    // Declaration.
    struct data dt1;
    struct data dt2;

    // Usage.
    dt1.age = 10;
    sprintf(dt1.name, "Iesus");

    dt2.age = 20;
    sprintf(dt2.name, "Salvator");

    printf("dt1: %d, %s.\n", dt1.age, dt1.name);
    printf("dt2: %d, %s.\n", dt2.age, dt2.name);

    return 0;
}


