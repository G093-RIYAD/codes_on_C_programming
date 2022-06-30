//#01 Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num % 5 == 0 && num % 11 == 0){
        printf("This %d number is divisible by 5 and 11");
    }
    else{
        printf("This %d number is not divisible by 5 and 11");
    }
    return 0;
}
// #02 Write a C program to find maximum between three numbers.
#include <stdio.h>
int main()
{
    int a=49, b=59,c=39;
    if(a>b && a>c){
        printf("a has the maximum number between three variable");
    }
    else if(b>a && b>c){
        printf("b has the maximum number between three variable");
    }
    else{
        printf("c has the maximum number between three variable");
    }
    return 0;
}
