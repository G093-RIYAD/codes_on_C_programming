#include<stdio.h>
int main()
{
  //odd number
    int a;
    for(a=1 ;a<=100;a=a+2){
        printf("%d\n",a);
    }
  //even number
    int a;
    for(a=2 ;a<=100;a=a+2){
        printf("%d\n",a);
    }   
    int a;
    for(a = 10; a>= -2; a = a-3){
        printf("%d\n",a);
        printf("*\n");
        printf("**\n");
        printf("***\n");
    }
    //infinite loop
    int a;
    for(a=1; a<=5;a--){
        printf("%d\n",a);
        printf("*\n");
        printf("**\n");
        printf("***\n");
    }
    //Write a for loop which will pint the following numbers:
