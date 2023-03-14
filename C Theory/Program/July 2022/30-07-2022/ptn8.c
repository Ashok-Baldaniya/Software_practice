
// * * * * * * * * * 
// * * * * * * * * *
// * * * * * * * * *

#include <stdio.h>

int main()
{
    int i, j, row, column;
    printf("enter rows:\n");
    scanf("%d", &row);
    printf("enter column:\n");
    scanf("%d", &column);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}