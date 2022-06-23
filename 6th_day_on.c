#include <stdio.h>
int main() 
{
   int x = 5;
   if (x==5){
         printf("Value of x is %d.",x);
    }
   
   int x = 10;
   if (x>50){
         printf("x is grater than 50.");
    }
   
   int a = 300;
   if (a>200){
        printf("a is grater");
    }
   
   int a,b;
   scanf("%d%d",&a,&b);
   if (a>b){
        printf("a is grater");
    }
   else{
        printf("b is grater");
    }
   
   int a;
    scanf("%d",&a);
    if (a> 50 && a <100){
        printf("a is grater");
    }
    return 0;
}
