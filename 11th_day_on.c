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
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
