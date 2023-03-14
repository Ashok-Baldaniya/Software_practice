#include <stdio.h>
int main()
{
    int i, vowel = 0, consonent = 0;
    char s[100] = "HeLlo HoW Are yoU";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
        else
        {
            consonent++;
        }
    }
    printf("\nvowel in string is : %d\n", vowel);
    printf("consonent in string is : %d\n", consonent);

    return 0;
}