#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("enter number to sum upto it\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("the sum of %d natural number is %d", num, sum);

    return 0;
}