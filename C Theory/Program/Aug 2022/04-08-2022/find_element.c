#include <stdio.h>
int main()
{
    int i, ele, flag = 0;
    int a[5] = {35, 74, 27, 49, 38};
    printf("enter element:");
    scanf("%d", &ele);
    for (i = 0; i < 5; i++)
    {
        if (ele == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d element found at %d index position ", ele, i);
    }
    else
    {
        printf("element not found");
    }

    return 0;
}