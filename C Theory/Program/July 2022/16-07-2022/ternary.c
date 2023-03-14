#include<stdio.h>
int main()
{
    // syntex -> (condition) ? (statement 1 TRUE): (statement 2 FALSE);
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    (age>18)? printf("you are eligible for voting"):printf("you are not eligible for voting");
    return 0;
}