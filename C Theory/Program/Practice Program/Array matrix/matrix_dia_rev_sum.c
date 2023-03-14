#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[3][3] ,b[3][3] ,c[3][3] ;
    // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, c[3][3];
    printf("Enter first matrix element :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter %d,%d element ",i,j);
            scanf("%d ", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter second matrix element :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter %d,%d element ",i,j);
            scanf("%d ", &b[i][j]);
        }
        printf("\n");
    }
    printf("\nThe subtraction of both matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}