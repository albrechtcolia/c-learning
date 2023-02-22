
#include <stdio.h>

int main (int argc, char *argv[])
{
    char ch1 = 'A';
    char ch2 = 65;
    int  ch3 = '1';
    int  ch4 = 49;
    int  ch5;

    printf("ch1, ch2\n");
    printf("\tchar: %c %c\n", ch1, ch2);
    printf("\tint.: %d %d\n\n", ch1, ch2);

    printf("ch3, ch4\n");
    printf("\tchar: %c %c\n", ch3, ch4);
    printf("\tint.: %d %d\n", ch3, ch4);

    printf("ch5\n");
    ch5 = 'M';
    printf("\tch5: %c %d\n", ch5, ch5);

    ch5 = 74;
    printf("\tch5: %c %d\n", ch5, ch5);

    return 0;
}


