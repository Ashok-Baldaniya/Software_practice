#include <stdio.h>
int main()
{
    int i;
    char s[100] = "hello world";
    for (i = 0; s[i] != '\0'; i++)
    {
      printf("%c ",s[i]);
    }

    return 0;
}