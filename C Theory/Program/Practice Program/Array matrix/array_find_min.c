#include <stdio.h>
int main()
{
    // find minimum value

    int min, i;
    int a[7];
    for (i = 0; i < 7; i++)
    {
        printf("enter %d index element : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    min = a[0];
    for (i = 0; i < 7; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("\nmin value is %d ", min);

    return 0;
}