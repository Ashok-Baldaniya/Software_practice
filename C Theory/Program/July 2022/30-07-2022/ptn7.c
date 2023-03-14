
//     *     
//     *     
// * * * * * 
//     *     
//     *   

#include <stdio.h>

int main()
{
    int i, j, num;
    printf("enter odd number of row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == (num + 1) / 2 || j == (num + 1) / 2)
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