#include <stdio.h>

struct emp
{
    int id;
    char name[20];
};

int main()
{
    struct emp e1 = {101, "ashok"}; // here emp is structure & e1 is object
    struct emp e2 = {102, "krunal"};
    printf("%d %s\n", e1.id, e1.name);
    printf("%d %s", e2.id, e2.name);
    return 0;
}