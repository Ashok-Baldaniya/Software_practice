#include<stdio.h>

int main()
{
    FILE *ashok;
    ashok=fopen("main.txt","w");
    char s[20]="\nhello world";
    fprintf(ashok,"%s",s);
    printf("data upload successfully");
    fclose(ashok);
    return 0;
}