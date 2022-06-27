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

#include <stdio.h>
int main()
{
    /*Write a program which will take a small letter alphabet as input
    from the user and print whether the alphabet is VOWEL or CONSONANT.*/
    char ch;
    printf("Print your single alphabet character: ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("This %c alphabet character is a VOWEL. ",ch);
    }
    else{
        printf("This %c alphabet character is a CONSONANT. ",ch);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<2){
        printf("Infant");
    }
    else if(age<9){
        printf("Child");
    }
    else if(age<18){
        printf("Teenage");
    }
    else if(age<30){
        printf("Adult");
    }
    else{
        printf("Old");
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int num1=1;
	int num2=2;
	if(num1<num2)		//test-condition
	{
		printf("num1 is smaller than num2");
	}
	int x = 41;
	x =x+ 1;
	if (x == 42) {
   	printf("You succeed!");}
	return 0;
}
#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age >=18)
   {
	/* This statement will only execute if the
	 * above condition (age>=18) returns true
	 */
	printf("You are eligible for voting");
   }
   else
   {
	/* This statement will only execute if the
	 * condition specified in the "if" returns false.
	 */
	printf("You are not eligible for voting");
   }
   return 0;
}

#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age >=18)
	printf("You are eligible for voting");
   else
	printf("You are not eligible for voting");
   return 0;
}

if(condition) {
    //Nested if else inside the body of "if"
    if(condition2) {
       //Statements inside the body of nested "if"
    }
    else {
       //Statements inside the body of nested "else"
    }
}
else {
    //Statements inside the body of "else"
}
#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age >=18)
   {
	/* This statement will only execute if the
	 * above condition (age>=18) returns true
	 */
	printf("You are eligible for voting");
   }
   else
   {
	/* This statement will only execute if the
	 * condition specified in the "if" returns false.
	 */
	printf("You are not eligible for voting");
   }
   return 0;
}
#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age >=18)
	printf("You are eligible for voting");
   else
	printf("You are not eligible for voting");
   return 0;
}
if(condition) {
    //Nested if else inside the body of "if"
    if(condition2) {
       //Statements inside the body of nested "if"
    }
    else {
       //Statements inside the body of nested "else"
    }
}
else {
    //Statements inside the body of "else"
}
