
#include <stdio.h>

/**
 * Concatenate two strings.
 */

int main (int argc, char *argv[])
{
    char str1[100];
    char str2[] = "Iesus";
    char str3[] = " Salvator";
    int  size;

    // Copy 'str2' to 'str1'.
    for (size = 0; str2[size] != '\0'; size++)
        str1[size] = str2[size];

    str1[size] = '\0';

    printf("%s\n", str1);

    // Concatenate 'str3' to 'str1'.
    for (size = 0; str1[size] != '\0'; size++);

    for (int a = 0; str3[a] != '\0'; a++, size++)
        str1[size] = str3[a];

    str1[size] = '\0';

    printf("%s\n", str1);

    return 0;
}
