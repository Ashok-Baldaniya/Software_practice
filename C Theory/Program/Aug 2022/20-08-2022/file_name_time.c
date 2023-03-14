#include<stdio.h>

int main()
{
    printf("The current line is %d\n",__LINE__);
    printf("The current time is %s\n",__TIME__);
    printf("The current date is %s\n",__DATE__);
    printf("The file name is %s",__FILE__);
    return 0;
}