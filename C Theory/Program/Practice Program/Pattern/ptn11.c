
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

#include <stdio.h>

int main()
{
    int i, j, k, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (k = i; k < 2 * num - i; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (k = i; k < 2 * num - i; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}