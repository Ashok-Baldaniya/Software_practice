#include <stdio.h>
int main()
{
    // integer data type

    int a=10,b=20,sum;
    sum=a+b;

    printf("the sum of a and b is %d",sum);




    // float data type
    //  %.0f gives you round off integer value

    float a=3.2,b=3.4,sum;
    sum=a+b;

    printf("the sum of a and b is %.0f",sum);





    // character data type (include 0-9,a-b,A-B,$ only)

    char a='3';
    printf("the character is %c",a);





    // string data type

    char s[20] = "good morning";
    char t[20] = "good evening";
    char u[20] = "good night";

    printf(" %s\n %s\n %s\n", s, t, u);
    printf("%s\n",s);
    printf("%s\n",t);
    printf("%s\n",u);

    return 0;
}