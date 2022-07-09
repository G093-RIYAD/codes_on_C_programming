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
    int a;
    for(a=100;a>=0;a=a-10){
        printf("%d\n",a);

    }
  //Write a for loop which will print summation of all numbers which are divided by 3 and 5 between 30 to 120.
    int a,sum;
    for(a=30;a<=120;a++){
        if(a % 3 == 0 && a % 5 == 0){
            sum = sum + a;
      
}
