#include <stdio.h>
int main()
{
    int num, i;
    printf("enter any number\n");
    scanf("%d", &num);
    if (num == 1 || num == 2)
    {
        printf("number is prime number\n");
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i != 0)
            {
                printf("number is prime number\n");
                break;
            }
            else
            {
                printf("number is non prime number\n");
                break;
            }
        }
    }

    return 0;
}