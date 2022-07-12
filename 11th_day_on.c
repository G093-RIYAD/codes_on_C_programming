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
#include<stdio.h>
#include<math.h>
int main()
{
long int num, rev = 0, dig;

printf("\n\nENTER A NUMBER-----: ");
scanf("%ld", &num);
while(num>0)
{
dig = num % 10;
rev = rev * 10 + dig;
num = num / 10;
}
printf("\nREVERSED NUMBER IS----: %ld", rev);
return 0;
}
