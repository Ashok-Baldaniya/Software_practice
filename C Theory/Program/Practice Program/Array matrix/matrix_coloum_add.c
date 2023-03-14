#include <stdio.h>
int main()
{
    int i, j, column, sum = 0;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("the matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter column index to sum : ");
    scanf("%d", &column);
    j = column;
    for (i = 0; i < 3; i++)
    {
        sum = sum + a[i][j];
    }
    printf("the sum of column %d elemrnt is %d", column + 1, sum);

    return 0;
}