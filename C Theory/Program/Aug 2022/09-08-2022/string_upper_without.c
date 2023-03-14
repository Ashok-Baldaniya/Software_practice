#include <stdio.h>

int main()
{
    int i;
    char s[100] = "welcome to ,$ Tops";
    for (i = 1; s[i] != '\0'; i++)
    {
        s[0] = s[0] - 32;
        if ((s[i] >= 97 && s[i] <= 122))
        {
            s[i] = s[i] - 32;
        }
    }
    printf("%s", s);

    return 0;
}

