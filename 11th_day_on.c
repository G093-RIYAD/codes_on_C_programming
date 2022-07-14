#include <stdio.h>
int main() {
int language = 10;
  switch (language) 
#include <stdio.h>
 
int main () {

   int a;
	
   /* for loop execution */
   for( a = 10; a < 20; a = a + 1 ){
      printf("value of a: %d\n", a);
   }
 
   return 0;
}
#include <stdio.h>
 
int main () {

   for( ; ; ) {
      printf("This loop will run forever.\n");
   }

   return 0;
}

int max(int num1, int num2) {

   
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}	
#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle: \n");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral\n");
   else
      printf("The given Triangle is scalene\n");
   return 0;
}
/* program to reverse an integer number.*/

#include <stdio.h>

int main()
{
    int n;
    int dig, revNumber;

    printf("Enter an integer number : ");
    scanf("%d", &n);

    /*Reversing Number*/
    revNumber = 0;

    while (n > 0) {
        dig = n % 10; /*get digit*/
        revNumber = (revNumber * 10) + dig;
        n = n / 10;
    }

    printf("Reverse Number is : %d\n", revNumber);
    return 0;
}
/** C program to swap adjacent characters 
* of a string but obly if it is of even 
* length
*/

#include <stdio.h>
#include <string.h>

// main function
int main()
{
	// Declare an integer pointer
	char string[30]={0};
	char c=0;
	int length=0,i=0;

	// Take string input from the user
	printf("\nEnter the string : ");
	fgest(string,30,stdin);//gets(string);

	// calculate the length of the string
	length = strlen(string);

	if(length%2==0)
	{
		for(i=0;i<length;i+=2)
		{
