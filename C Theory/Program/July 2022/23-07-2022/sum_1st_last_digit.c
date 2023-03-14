#include <stdio.h>
int main()
{
    int num, rem, r;
    printf("enter any number\n");
    scanf("%d", &num);
    r = num % 10;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
    }
    printf("sum of first and last digit is %d", r + rem);
    return 0;
}