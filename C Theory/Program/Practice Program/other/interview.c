#include<stdio.h>
int main()
{
    char c;
    printf("Enter any Character");
    scanf("%c",&c);
    if((c>64 && c<91) || (c>96 && c<123))
    {
        switch(c)
        {
            case 'a': 
            printf("vowel");
            break;

            case 'e': 
            printf("vowel");
            break;

            case 'i': 
            printf("vowel");
            break;

            case 'o': 
            printf("vowel");
            break;

            case 'u': 
            printf("vowel");
            break;

            default:
            printf("Consonent");
        }
    }
    else
    {
        printf("Enter valid character");
    }
    return 0;
}