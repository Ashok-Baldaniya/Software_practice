#include<stdio.h>
#include "myfile.h"
int main()
{
    printf("\nthe value of a is %d",a);
    printf("\nthe value of b is %.2f",b);
    printf("\nthe value of c is %c",c);
    printf("\nthe value of s is %s",s);
    printf("\nthe value of PI is %.2f\n",PI);
    add(3,7);
    sub(7,2);
    mul(4,4);

    return 0;
}