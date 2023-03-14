#include <stdio.h>
void arm(int num)
{
    int i, arm = 0, rem, temp = num;

    if (num >= 0 && num <= 999)
    {
        for (i = 1; i <= 3; i++)
        {
            rem = num % 10;
            arm = arm + rem * rem * rem;
            num = num / 10;
        }
        if (arm == temp)
        {
            printf("number is armstrong");
        }
        else
        {
            printf("number is not armstrong");
        }
    }
    else
    {
        for (i = 1; i <= 4; i++)
        {
            rem = num % 10;
            arm = arm + rem * rem * rem * rem;
            num = num / 10;
        }
        if (arm == temp)
        {
            printf("number is armstrong");
        }
        else
        {
            printf("number is not armstrong");
        }
    }
}

int main()
{
    arm(371);
    return 0;
}