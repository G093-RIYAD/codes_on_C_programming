#include <stdio.h>
int main()
{
    // 01- Add two numbers and display it's sum:
    int a,b,c;
    a = 5;
    b = 8;
    c = a+b;
    printf ("%d\n",c);

    // 02- Input two integer value and display thoes Value:
    int a,b;
    printf("Type two integer value: \n");
    scanf("%d%d",&a,&b);
    printf("The two values are: %d and %d.",a,b);
    
    // Input two integer value and display it's sum;
    int a,b;
    printf("Type two value: \n");
    scanf("%d%d",&a,&b);
    printf("Sum of this two value: %d",a+b);
    
    return 0;
}
