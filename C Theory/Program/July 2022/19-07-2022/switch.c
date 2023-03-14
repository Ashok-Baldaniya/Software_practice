#include <stdio.h>
int main()
{
    int opt, a, b;
    printf("enter value of a\n");
    scanf("%d", &a);
    printf("enter value of b\n");
    scanf("%d", &b);

    printf("choose 1 for addition\n");
    printf("choose 2 for subtraction\n");
    printf("choose 3 for multiplication\n");
    printf("choose 4 for division\n");
    printf("choose 5 for module\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("the addition of %d and %d is %d",a,b,a+b );
        break;
    case 2:
        printf("the subtraction of %d and %d is %d",a,b,a-b);
        break;
    case 3:
        printf("the multiplication of %d and %d is %d",a,b,a*b);
        break;
    case 4:
        printf("the division of %d and %d is %d",a,b,a*b);
        break;
    case 5:
        printf("the module of %d and %d is %d",a,b,a/b);
        break;

    default:
        printf("enter valid option");
        break;
    }
    return 0;
}