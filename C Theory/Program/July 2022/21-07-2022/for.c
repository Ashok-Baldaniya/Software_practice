#include <stdio.h>
int main()
{
    int i, num;
    printf("enter number to print\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }

    return 0;
}