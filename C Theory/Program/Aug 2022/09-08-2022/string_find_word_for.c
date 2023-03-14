#include <stdio.h>
int main()
{
    int i, count = 1;
    char s[100] = "welcome to tops";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
        }

    printf("No of word in string is :  %d ", count);
    return 0;
}