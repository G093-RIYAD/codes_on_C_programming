#include <stdio.h>
int main() 
{
   //if condition.
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
   
   //else condition.
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
   
   char ans;
    printf("which Programming language do you need for web dev.\n[a] Java  [c] C++\n[b] Java script  [d] python\nAns:");
    scanf("%c",&ans);
    if (ans == 'b'){
        printf("Currect");
    }
    else{
        printf("Worng");
    }
    r
    return 0;
}
