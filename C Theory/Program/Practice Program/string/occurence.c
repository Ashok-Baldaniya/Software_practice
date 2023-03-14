#include <stdio.h>
int main()
{
    int i, count = 0;
    char word;
    char s[100] = "hello world";
    printf("enter any alphabet\n");
    scanf("%s", &word);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == word)
        {
            count++;
        }
    }
    printf("the alphabet you have entered is %d time available in string",count);

    return 0;
}