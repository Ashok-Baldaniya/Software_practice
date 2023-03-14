#include <stdio.h>

int Fact(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    printf("%d", Fact(5)+Fact(7));
    return 0;
}



// #include <stdio.h>

// int add(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     // int sum;
//     // sum = add(4, 5);
//     printf("%d", add(4,5));
//     return 0;
// }