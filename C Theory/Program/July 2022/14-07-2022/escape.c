#include<stdio.h>
int main()
{
    // \n -> for new line 
    // \t -> for tab space 
    // \0 -> for null character
    // \r -> for carriage return
    // \v -> for vertical space
    
    printf("Hello ,world\n");
    printf("\vHello ,world\n");
    printf("Hello ,world\n");
    printf("Hello ,wo\rrld\n");
    printf("Hello ,\0world\n");

    return 0;
}