#include <stdio.h>
void evodd(int num)
{
    if (num % 2 == 0)
    {
        printf("\ngiven number is even");
    }
    else
    {
        printf("\ngiven number is odd");
    }
}
int main()
{
    evodd(56);
    return 0;
}