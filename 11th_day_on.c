{
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
#include <stdio.h>
 int main()
{
    char ch;
    printf("Type any single alphabet, digit or any spacial character: ");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        printf("%c is a Alphabet",ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("%c is a Digit",ch);
    }
    else{
        printf("%c is a Spacial Character",ch);
    }
    return 0;
}
/*
 * C program to convert given number of days to a measure of time given
 * in years, weeks and days. For example 375 days is equal to 1 year
 * 1 week and 3 days (ignore leap year)
 */
#include <stdio.h>
#define DAYSINWEEK 7
 
void main()
{
    int ndays, year, week, days;
 
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / DAYSINWEEK;
    days =(ndays % 365) % DAYSINWEEK;
    printf ("%d is equivalent to %d years, %d weeks and %d daysn",
            ndays, year, week, days);
}
