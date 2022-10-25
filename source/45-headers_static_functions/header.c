
#include "header.h"

static int internal_calc (int a, int b);

int calc(int a, int b) {
    int n = internal_calc(a, b);

    return n;
}

static int internal_calc (int a, int b)
{
    return a + b;
}


