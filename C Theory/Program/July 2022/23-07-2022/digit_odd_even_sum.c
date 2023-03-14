#include <stdio.h>
int main()
{
    int num, sum, odd = 0, even = 0, rem;
    printf("enter any number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            even = even + rem;
        }
        else
        {
            odd = odd + rem;
        }
        num = num / 10;
    }
    printf("sum of even digit is %d\n", even);
    printf("sum of odd digit is %d\n", odd);

    return 0;
}