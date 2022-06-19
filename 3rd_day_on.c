#include<stdio.h>
int main()
{
    char MY_char;
    MY_char = 'k';
    MY_char = '3';
    printf("%c\n",MY_char);
    
    char  a = 'm', b = 'u', c = 's', d =  'a';
    printf("%c%c%c%c\n",a,b,c,d);
    
    // For ASCII code use %d;
    char x='A';
    printf("%d\n",x);
    
    int a = 65, b = 66, c= 67;
    printf("%c%c%c\n",a,b,c);
    
    //User input using Scanf();
    
    int x;
    scanf("%d\n",&x);
    
    char y;
    scanf("%c\n",&y);
    
    float z;
    scanf("%f\n",&z);
    
    double z01;
    scanf("%if",&z01);
    
    char a;
    scanf("%c",&a);
    printf("Your total value: %c\n",a);
    
    int a,b;
    printf("Enter two Value for a and b: \n");
    scanf("%d%d",&a, &b);
    printf("your Sum value: %.0d n",a+b-20);
    
    return 0;
}
