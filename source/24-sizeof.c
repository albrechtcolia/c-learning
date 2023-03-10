
#include <stdio.h>

int main (int argc, char *argv[])
{
    // Returns the size of a data type.
    printf("char..: %ld bytes\n", sizeof(char));
    printf("int...: %ld bytes\n", sizeof(int));
    printf("long..: %ld bytes\n", sizeof(long));
    printf("float.: %ld bytes\n", sizeof(float));
    printf("double: %ld bytes\n", sizeof(double));

    return 0;
}


