
#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    for (;;) {
        printf("Infinite.\n");
        sleep(1);
    }

    return 0;
}



