//#01 Write a C program to find sum of first and last digit of any number.
#include <stdio.h>
int main()
{
    int num, sum=0, firstDigit, lastDigit;
    printf("Enter any number : ");
    scanf("%d", &num);
    lastDigit = num % 10;
    firstDigit = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
//#03 Write a C program to calculate product of digits of any number.
#include <stdio.h>
int main()
{
  	int Number, Reminder, Product = 1;
  	printf("Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	while(Number != 0)
  	{
  		Reminder = Number % 10;
  		Number = Number / 10;
		Product = Product * Reminder;
	}
	printf("%d", Product);
  	return 0;
}
//#04 Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
#include<stdio.h>
int main()
{
    int n=4, i, s=0, sum=0;
    for(i=0;i<=n;i++){
        s=s*10+1;
        printf("%d\n",s);
        sum=sum+s;
    }
    printf("Sum of the series is %d",sum);
    return 0;
}
