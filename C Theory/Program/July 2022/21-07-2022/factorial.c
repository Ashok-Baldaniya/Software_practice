#include <stdio.h>
int main()
{
    int num, i, fact = 1;
    printf("enter number to find factorial\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of %d is %d", num, fact);

    return 0;
}