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
/*  C Program to check whether number is EVEN or ODD  */

#include <stdio.h>
int main()
{

    int num;

    printf("Enter an integer number :: ");
    scanf("%d",&num);

    /*If number is divisible by 2 then number
    is EVEN otherwise number is ODD*/

    if(num%2==0)
        printf("\n%d is an EVEN number.",num);
    else
        printf("\n%d is an ODD number.",num);

