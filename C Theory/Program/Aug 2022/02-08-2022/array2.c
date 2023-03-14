#include <stdio.h>
int main()
{

    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("enter %d index element :", i);
        scanf("%d", &a[i]);
    }
    printf("THE ARRAY YOU HAVE ENTER IS BELOW\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}