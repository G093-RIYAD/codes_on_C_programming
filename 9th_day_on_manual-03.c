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
// #03 Write a Program to take the value from the user as input any alphabet and check whether it is vowel or consonant (Using the switch statement).
#include <stdio.h>
int main()
{
    char v;
    printf("Type any sengle alphabet: ");
    scanf("%c",&v);
    switch(v){
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}
// #04 Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Type a year: ");
    scanf("%d",&year);
    if(year % 400 == 0 && year % 100 != 0 || year % 4 == 0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a  leap year",year);
    }
    return 0;
}
