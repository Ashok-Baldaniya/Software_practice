#include<stdio.h>
int main()
{
    for(int i=0;0<7;i++){
        for(int j=0;j<7;j++){
              if(i==0||i==3||i==6||j==0||i+j>9){
                printf("* ");
              }
              else
              {
                printf(" ");
              }
        }
    }
    return 0;
}