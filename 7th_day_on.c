#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Value of a: ");
    scanf("%d",&a);
    if(a % 3 == 0 || a % 5 == 0){
        printf("The number is divisible by 3 or 5.");
    }
    else{
        printf("The number is not divisible by 3 or 5.");
    }
    
    /*Write a program which will take a positive integer as input
    from the user and print whether the integer is EVEN or ODD.*/
    int a,b;
    printf("Input a integer value: ");
    scanf("%d",&a);
    b = a % 2;
    if(b == 0){
        printf("%d is an EVEN number.",a);
    }
    else{
        printf("%d is an ODD number.",a);
    }
    return 0;
}
#include<stdio.h>    
int main(){    
int number=0;    
printf("Enter a number:");    
scanf("%d",&number);    
if(number%2==0){    
printf("%d is even number",number);    
}    
return 0;  
} 
