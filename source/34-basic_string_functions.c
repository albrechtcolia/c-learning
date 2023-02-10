
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declaration.
void func1 (char *str)
{
    if (!str)
        return;

    printf("str: %s\n", str);
}

int main (int argc, char *argv[])
{
    // Function calls.
    char str1[] = "Test 1";

    func1(str1);
    func1("Test 2");

    // Using pointers.
    char *str2;
    int   size;

    size = sizeof(char) * 100;
    str2 = (char *) malloc(size);

    if (!str2) {
        printf("Malloc failed.\n");
        exit(-1);
    }

    memset(str2, '\0', size);
    sprintf(str2, "Test 3");

    func1(str2);

    memset(str2, '\0', size);
    free(str2);

    return 0;
}


