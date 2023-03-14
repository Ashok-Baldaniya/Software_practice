#include <stdio.h>
int main()
{
    int num, rem, temp, sum = 0;
    printf("enter number\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    if (sum == temp) // here use == conditional ope., not a = assignment operator
    {
        printf("the number is pelindrom");
    }
    else
    {
        printf("number is not pelindrom");
    }

    return 0;
}