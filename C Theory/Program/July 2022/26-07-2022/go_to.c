#include<stdio.h>
int main()
{
    int num,i=1;
    content:
    printf("%d ",i);
    i++;
    while (i<=10)
    {
        goto content;
    }
    
    return 0;
}