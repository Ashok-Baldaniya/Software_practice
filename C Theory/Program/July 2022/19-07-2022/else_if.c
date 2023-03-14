#include <stdio.h>
int main()
{
    int per;
    printf("enter the percentage :\n");
    scanf("%d", &per);
    if (per >= 85 && per <= 100)
    {
        printf("pass with A grade");
    }
    else if (per >= 60 && per < 85)
    {
        printf("pass with B grade");
    }
    else if (per >= 35 && per < 60)
    {
        printf("pass with C grade");
    }
    else
    {
        printf("sorry , you are fail");
    }

    return 0;
}