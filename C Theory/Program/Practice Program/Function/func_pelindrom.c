#include <stdio.h>
void pel(int num)
{
    int i, pel = 0, rem, temp = num;
    while (num != 0)
    {
        rem = num % 10;
        pel = pel * 10 + rem;
        num = num / 10;
    }
    if (pel == temp)
    {
        printf("the number is pelindrome");
    }
    else
    {
        printf("the number is not pelindrome");
    }
}

int main()
{
    pel(1231);
    return 0;
}