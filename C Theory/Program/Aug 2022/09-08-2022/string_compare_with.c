#include <stdio.h>
#include <string.h>

int main()
{
    // there are result always (-1,0,+1)
    char s1[100] = "Welcome";
    char s2[100] = "Welcome";
    printf("after compare string result is : %d", strcmp(s1, s2));
    return 0;
}