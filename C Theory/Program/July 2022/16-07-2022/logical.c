#include <stdio.h>
int main()
{
    // and -> &&
    // or  -> ||
    // not -> !

    int a = 5;
    // AND OPERATOR
    printf("%d\n", (a < 5) && (a > 5));
    printf("%d\n", (a < 7) && (a > 7));
    printf("%d\n", (a < 2) && (a > 2));

    // OR OPERATOR
    printf("%d\n", (a < 5) || (a > 5));
    printf("%d\n", (a < 7) || (a > 7));
    printf("%d\n", (a < 2) || (a > 2));

    // NOT OPERATOR
    printf("%d\n", !(a = 5));
    printf("%d\n", !(a != 5));

    return 0;
}