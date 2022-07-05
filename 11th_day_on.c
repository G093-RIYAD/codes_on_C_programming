#include <stdio.h>
    int main() {
        int num = 8;
        switch (num) {
            case 7:
                printf("Value is 7");
                break;
            case 8:
                printf("Value is 8");
                break;
            case 9:
                printf("Value is 9");
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
    }
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
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
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
