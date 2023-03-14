#include <stdio.h>
int main()
{ // SHORTHAND OPERATOR (+= ,-= ,*= ,/=,%=)
    int a = 10;
    a += 10; // a=a+10;
    printf("%d\n", a += 100);
    printf("%d\n", a -= 100);
    printf("%d\n", a *= 100);

    return 0;
}