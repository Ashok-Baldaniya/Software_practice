#include <stdio.h>
int main()
{
    int i;
    int a[5] = {56, 94, 35, 07, 66};
    printf("enter the value of index:\n");
    scanf("%d", &i);
    printf("the value of %d index is %d", i, a[i]);
    return 0;
}