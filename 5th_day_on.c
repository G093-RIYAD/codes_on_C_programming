#include <stdio.h>
int main()
{
    //01-Write a C Program to Calculate Area of a Square, take length of one side as user input.
    int a;
    printf("If one side of length : ");
    scanf("%d",&a);
    printf("Then the area of Square is: %d",a * a);
    
    //02-Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
    float celsius = 16, fahrenheit;
    fahrenheit = (celsius *9/5) +32;
    printf("%.2f celsius : %.2f fahrenheit",celsius, fahrenheit);
    
    //Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
    float fahr, cel;
    fahr = 70;
    cel = ((fahr-32)*5/9);
    printf("%.2f fahr : %.2f cel",fahr,cel);
    return 0;
}
