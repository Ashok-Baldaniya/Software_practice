#include <stdio.h>

struct add
{
    char city[20];
    char state[20];
};

struct emp
{
    int id;
    char name[20];
    struct add atr;
};
int main()
{
    struct emp e1 = {102, "ashok", "surat", "gujarat"};
    printf("%d %s %s %s", e1.id, e1.name, e1.atr.city, e1.atr.state);
    return 0;
}