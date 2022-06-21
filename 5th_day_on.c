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
    
    //03-Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
    float fahr, cel;
    fahr = 70;
    cel = ((fahr-32)*5/9);
    printf("%.2f fahr : %.2f cel",fahr,cel);
    
    //04-Write a C program to enter marks of five subjects and calculate total and average marks.
    int v=70,w=76,x=74,y=85,z=80,total,average;
    printf("All the subject's and there marks: \nv: %d\nw: %d\nx: %d\ny: %d\nz: %d\n",v,w,x,y,z);
    total = v+w+x+y+z;
    printf("Total marks: %d\n",total);
    average = total/5;
    printf("The average marks: %d",average);
    return 0;
}
