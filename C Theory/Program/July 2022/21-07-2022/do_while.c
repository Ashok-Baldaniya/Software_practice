#include <stdio.h>
int main()
{
    int i=1,num;
    printf("enter number\n");
    scanf("%d", &num);
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= num);
}