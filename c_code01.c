#include <stdio.h>
int main()
{
   /* Our first simple C basic program */
   printf("MD Riyad");
   getch();
   return 0;
}

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}

#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}

/*
    Documentation section
    C programming basics & structure of C programs
    Date : 06/11/2022
*/
 
#include <stdio.h>   /* Link section */
int total = 0;       /* Global declaration, definition section */
int sum (int, int);  /* Function declaration section */
int main ()          /* Main function */
{
    printf ("This is a C basic program \n");
    total = sum (1, 1);
    printf ("Sum of two numbers : %d \n", total);
    return 0;
}
 
int sum (int a, int b) /* User defined function */
{   
    return a + b;      /* definition section */
}
