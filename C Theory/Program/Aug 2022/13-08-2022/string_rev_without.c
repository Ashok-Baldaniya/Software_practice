#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[20] = "hello world";
    int l = strlen(s);
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}