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
#include <stdio.h>  
int main()  
{  
    int a, b, c;   
     printf("Enter three numbers?");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)  
    {  
        printf("%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("%d is largest",c);  
    }  
    if(a == b && a == c)   
    {  
        printf("All are equal");   
    }  
}  
#include<stdio.h>    
int main(){    
int number=0;    
printf("enter a number:");    
scanf("%d",&number);     
if(number%2==0){    
printf("%d is even number",number);    
}    
else{    
printf("%d is odd number",number);    
}     
return 0;  
}  
#include <stdio.h>  
int main()  
{  
    int age;   
    printf("Enter your age?");   
    scanf("%d",&age);  
    if(age>=18)  
    {  
        printf("You are eligible to vote...");   
    }  
    else   
    {  
        printf("Sorry ... you can't vote");   
    } 
    return 0; 
}  

