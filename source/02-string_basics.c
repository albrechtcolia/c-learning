
#include <stdio.h>

int main (int argc, char *argv[])
{
    // Simple declaration.
    char str1[] = "Iesus";
    printf("str1: %s\n", str1);

    // String elements.
    printf("str1: %d %c %c %c %c \n",
        str1[0], str1[1], str1[2], str1[3], str1[4]);

    // Static allocated string.
    char str2[100];

    sprintf(str2, "%s Salvator", str1);
    printf("str2: %s\n", str2);

    // String set.
    char str3[] = { 'I', 'e', 's', 'u', 's', '\0'  };
    char str4[] = {  73, 101, 115, 117, 115, 0     };

    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);

    printf("str4: %c %c %c %c %c \n",
        str4[0], str4[1], str4[2], str4[3], str4[4]);

    // Changing values - 1.
    char str5[100];

    sprintf(str5,  "Iesus");
    printf("str5: %s\n", str5);

    sprintf(str5,  "Hominum");
    printf("str5: %s\n", str5);

    sprintf(str5,  "Salvator");
    printf("str5: %s\n", str5);

    // Changing values - 2.
    char str6[100];

    str6[0] = 'G';
    str6[1] = 'o';
    str6[2] = 'd';
    str6[3] = '\0';

    printf("str6: %s\n", str6);

    str6[0] = 'I';
    str6[1] = 'N';
    str6[2] = 'R';
    str6[3] = 'I';
    str6[4] = '\0';

    printf("str6: %s\n", str6);

    return 0;
}


