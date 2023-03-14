#include <stdio.h>
int main()
{
    // for ascending order

    int i, j, temp;
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
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("\n%d ", a[i]);
    }

    return 0;
}