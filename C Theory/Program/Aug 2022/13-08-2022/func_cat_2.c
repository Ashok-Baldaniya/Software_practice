#include <stdio.h>
void add(int a, int b)
{
    printf("enter any two number for addition\n");
    scanf("%d %d", &a, &b);
    printf("the addition of %d and %d is %d\n", a, b, a + b);
}

void sub(int a, int b)
{
    printf("enter any two number for subtraction\n");
    scanf("%d %d", &a, &b);
    printf("the subtraction of %d and %d is %d\n", a, b, a - b);
}

void mult(int a, int b)
{
    printf("enter any two number for multiplication\n");
    scanf("%d %d", &a, &b);
    printf("the multiplication of %d and %d is %d\n", a, b, a * b);
}

void div(int a, int b)
{
    printf("enter any two number for division\n");
    scanf("%d %d", &a, &b);
    printf("the division of %d and %d is %d\n", a, b, a / b);
}

int main()
{
    int a, b;
    add(a, b);
    sub(a, b);
    mult(a, b);
    div(a, b);

    return 0;
}