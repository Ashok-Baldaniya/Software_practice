#include <stdio.h>
int main()
{
    int i, j, num, sum = 0;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter row index value: ");
    scanf("%d", &num);
    i = num;
    for (j = 0; j < 3; j++)
    {
        sum = sum + a[i][j];
    }
    printf("the sum of row no. %d is %d", num + 1, sum);

    return 0;
}