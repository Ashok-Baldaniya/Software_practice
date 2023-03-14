#include <stdio.h>
void prime(int num)
{
    int i;
    if (num == 1 || num == 2)
    {
        printf("number is prime \n");
    }
    else
    {
        for (i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                printf("number is not prime\n");
                break;
            }
            else
            {
                printf("number is prime\n");
                break;
            }
        }
    }
}

int main()
{
    prime(5);
    return 0;
}