#include <stdio.h>

struct emp
{
    int id;
    char name[20];
};

int main()
{
    int i;
    struct emp e[2];
    for (i = 0; i < 2; i++)
    {
        printf("enter id of employee no %d :", i + 1);
        scanf("%d", &e[i].id);
        printf("enter name of employee no %d :", i + 1);
        scanf("%s", &e[i].name);
    }

    printf("\nthe data from above is:\n\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d %s\n", e[i].id, e[i].name);
    }

    return 0;
}