#include <stdio.h>
int main()
{
    int num, max = 0, rem;
    printf("enter any number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem >= max)
        {
            max = rem;
        }
        num = num / 10;
    }
    printf("the maximun digit is %d", max);

    return 0;
}