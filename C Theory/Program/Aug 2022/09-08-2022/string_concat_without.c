#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char s1[100] = "welcome to tops ";
    char s2[100] = "technologies and ";
    char s3[100] = "create your future";
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int l3 = strlen(s3);
    for (i = 0; i < l1 + l2 + l3; i++)
    {
        s2[l2 + i] = s3[i];
        s1[l1 + i] = s2[i];
    }
    printf("After concat string is : %s", s1);

    return 0;
}