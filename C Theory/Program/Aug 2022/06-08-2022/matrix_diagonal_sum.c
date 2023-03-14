#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter [%d,%d] index element : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    
    printf("\nthe sum of diagonal is %d\n\n", sum);

    return 0;
}