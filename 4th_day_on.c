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
    int e,f;
    printf("Type two integer value: \n");
    scanf("%d%d",&e,&f);
    printf("The two values are: %d and %d.",e,f);
    
    //03- Input two integer value and display it's sum;
    int g,h;
    printf("Type two value: \n");
    scanf("%d%d",&g,&h);
    printf("Sum of this two value: %d",g+h);
    
    //04- Input two integer value and display it's product;
    int x,y;
    printf("Type two value: \n");
    scanf("%d%d",&x,&y);
    printf("Sum of this two value: %d",x*y);
    
    //05- Input two float value and display it's sum;
    float m,n;
    printf("Type two value: \n");
    scanf("%f%f",&m,&n);
    printf("Sum of this two value: %.2f",m+n);
    
    return 0;
}
