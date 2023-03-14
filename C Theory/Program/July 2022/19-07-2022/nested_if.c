#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    
    
    // int a=243,b=344,c=25;
    
    if(a>c)
    {
        if(a>b)
        {
            printf("a is greater");
        }
        else
        {
            printf("b is greater");
        }
    
    }
    else
    {
        if(b>c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    return 0;
}