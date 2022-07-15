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

    
