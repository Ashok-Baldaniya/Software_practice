#include <stdio.h>
int main()
{
    float h, m;
    printf("enter minute\n");
    scanf("%f", &m);
    h = m / 60;
    printf("the time in hour is %.2f ", h);
    return 0;
}