// A       
// B C     
// D E F   
// G H I J 

#include <stdio.h>

int main()
{
    int i, j, num;
    printf("enter rows:\n");
    scanf("%d", &num);
    char a = 'A';
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}