#include <stdio.h>

int add()
{
    int a, b;
    printf("enter value of a\n");
    scanf("%d", &a);
    printf("enter value of b\n");
    scanf("%d", &b);
    return a + b;
}

int main()
{
    int sum;
    sum = add() + 200;
    printf("the sum is %d", sum);
    return 0;
}