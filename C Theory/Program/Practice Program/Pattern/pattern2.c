/*
    For rectangle and square

*/

#include <stdio.h>
int main()
{
    int i, j ,n,m;    //n for rows  and  m for column
    printf("enter row\n");
    scanf("%d",&n);
    printf("enter column\n");
    scanf("%d",&m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}