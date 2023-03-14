#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char s1[100] = "welcome to tops ";
    char s2[100] = "technologies and ";
    char s3[100] = "create your future";
    strcat(s2, s3);
    strcat(s1, s2);
    printf("After concat string is : %s", s1);

    return 0;
}