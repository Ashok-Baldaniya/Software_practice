#include <stdio.h>

int main()
{
    int a = 20;
    int *b = &a;
    int **c = &b;
    printf("\nthe value of a is %d\n", a);
    printf("the value of a is %d\n", *b);
    printf("the value of a is %d\n", **c);

    printf("address of a is %d\n", b);
    printf("address of a is %u\n", b);
    printf("address of a is %x\n", b);
    printf("address of a is %p\n", b);
    return 0;
}