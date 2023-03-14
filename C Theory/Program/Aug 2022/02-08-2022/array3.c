#include <stdio.h>
int main()
{
    int max, i;
    int a[7];
    for (i = 0; i < 7; i++)
    {
        printf("enter %d index element : ",i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    max = a[0];
    for (i = 0; i < 7; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nmax value is %d ", max);

    return 0;
}