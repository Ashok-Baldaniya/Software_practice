#include <stdio.h>

void hii()
{
    printf("ny have banavjo ok\n");
}

void hiii()
{
    printf("have ny banavta aavo program ok\n");
}

void hi() /// declare and define a function
{
    printf("have ny banavta aavo program ok\n");
    hii();
    hiii();
}

int main()
{
    hi(); // calling of function
    hii();
    hiii();

    return 0;
}