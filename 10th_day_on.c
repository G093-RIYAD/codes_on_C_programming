#include <stdio.h>
int main()
{
    int num = 5;
    num = num + 30;
    printf("%d\n",num);

    int a = 5;
    a += 40;
    printf("%d\n",a);

    int b = 60;
    b -= 5;
    printf("%d\n",b);

    int c = 5;
    c *= 10;
    printf("%d\n",c);
    
    int d = 77;
    d /= 6;
    printf("%d\n",d);

    int e = 77;
    e %= 6;
    printf("%d\n",e);
    return 0;
}
