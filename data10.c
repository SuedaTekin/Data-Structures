#include <stdio.h>
#include <stdlib.h>

// A function to add two integers
int addIntegers(int a, int b)
{
    int result = a + b;
    return result;
}

struct complex {
    int r;
    int i;
};

// A function to add two complex numbers
struct complex addComplex(struct complex a, struct complex b)
{
    struct complex result;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
}

int main() {
    int intResult = addIntegers(3, 5);
    struct complex complex1 = { 1, 2 };
    struct complex complex2 = { 3, 4 };
    struct complex complexResult = addComplex(complex1, complex2);

    printf("Integer Result: %d\n", intResult);
    printf("Complex Result: %d + %di\n", complexResult.r, complexResult.i);

    return 0;
}

