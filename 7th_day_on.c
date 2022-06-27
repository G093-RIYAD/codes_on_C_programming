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
#include <stdio.h>
int main()
{
   int var1, var2;
   printf("Input the value of var1:");
   scanf("%d", &var1);
   printf("Input the value of var2:");
   scanf("%d",&var2);
   if (var1 != var2)
   {
	printf("var1 is not equal to var2\n");
	//Nested if else
	if (var1 > var2)
	{
		printf("var1 is greater than var2\n");
	}
	else
	{
		printf("var2 is greater than var1\n");
	}
   }
   else
   {
	printf("var1 is equal to var2\n");
   }
   return 0;
}
#include <stdio.h>
int main()
{
   int var1, var2;
   printf("Input the value of var1:");
   scanf("%d", &var1);
   printf("Input the value of var2:");
   scanf("%d",&var2);
   if (var1 !=var2)
   {
	printf("var1 is not equal to var2\n");
   }
   else if (var1 > var2)
   {
	printf("var1 is greater than var2\n");
   }
   else if (var2 > var1)
   {
	printf("var2 is greater than var1\n");
   }
   else
   {
	printf("var1 is equal to var2\n");
   }
   return 0;
}
#include <stdio.h>

int main() {
	
	// variable to store the given number
	int n;
	
	//take input from the user
	scanf("%d",&n);
	
	//if else condition to check whether the number is even or odd
	if (n % 2 == 0) {
	    //the number is even
	    printf("Even");
	} else {
	    //the number is odd
	    printf("Odd");
	}
	
	return 0;
}
//check if the first condition holds
if (condition 1) {
    
    //if the second condition holds
    if (condition 2) {
        do something
    }
    //if the second condition does not hold
    else {
        do something else
    }
    
}
// if the first condition does not hold
else{
    
    //if the third condition holds
    if (condition 3) {
        do something
    }
    //if the third condition does not hold
    else {
        do something else
    }
    
}
