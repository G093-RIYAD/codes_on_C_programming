#include <stdio.h>
int main()
{
    int num = 5;
    num = num + 30;
    printf("%d",num);

    int a = 5;
    a += 40;
    printf("%d",a);

    int b = 60;
    b -= 5;
    printf("%d",b);

    int c = 5;
    c *= 10;
    printf("%d",c);
    
    int d = 77;
    d /= 6;
    printf("%d\n",d);

    int e = 77;
    e %= 6;
    printf("%d\n",e);
    return 0;
}
