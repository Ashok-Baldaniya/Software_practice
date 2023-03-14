
//   * 
//  * *
// *   *
//  * *
//   *


#include <stdio.h>

int main()
{
    int i, j, k, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (k = 1; k <= num - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= num; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= num - i; j++)
        {
            if (j == 1 || j == num - i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}