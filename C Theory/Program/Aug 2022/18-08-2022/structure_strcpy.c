#include <stdio.h>

struct emp
{
    int id;
    char name[20];
    float sal;
};

int main()
{
    struct emp e1;
    e1.id = 102;
    strcpy(e1.name , "ashok");
    e1.sal = 120000;
    printf("%d %s %.2f", e1.id, e1.name, e1.sal);

    return 0;
}