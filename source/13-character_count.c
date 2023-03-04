
#include <stdio.h>

int main (int argc, char *argv[])
{
    char str[] = "Iesus";
    int  index;

    // Counts each character of my string including the '\0'.
    for (index = 0; str[index] != '\0'; index++);

    printf("str size: %d\n", index);

    // Counts each character of my string without including the '\0'.
    for (index = -1; str[index+1] != '\0'; index++);

    printf("str size: %d\n", index);

    return 0;
}


