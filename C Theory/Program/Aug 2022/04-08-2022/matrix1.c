#include <stdio.h>
int main()
{
    int i, j, a[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter [%d,%d] index position element:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}