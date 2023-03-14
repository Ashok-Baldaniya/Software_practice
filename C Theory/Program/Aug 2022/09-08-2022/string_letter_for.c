#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[100] = "welcome to tops";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            continue; //
            // count--;
        }
        count++;
    }

    printf("No of Letter in string is :  %d ", count);
    return 0;
}