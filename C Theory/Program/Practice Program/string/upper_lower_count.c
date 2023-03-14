#include <stdio.h>
int main()
{
    int i, lower = 0, upper = 0;
    char s[100] = "HeLlo HoW Are yoU";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    printf("\nLowercase alphabet in string is : %d\n",lower);
    printf("Uppercase alphabet in string is : %d\n",upper);

    return 0;
}