/*
1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
int main()
{
    int i, j, num, m = 1;
    printf("enter row\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", m);
            m++;
        }

        printf("\n");
    }

    return 0;
}