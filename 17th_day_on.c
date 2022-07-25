#include <stdio.h>
int main()
{
    int num,a,b;
    printf("Enter your desair number of star: ");
    scanf("%d",&num);
    for(a=1;a<=num;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    for(a=num-1;a>=1;a--){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int uin, cn;
    printf("Enter the number for multiplication : ");
    scanf("%d",&uin);
    for(cn=1;cn<=10;cn++){
        printf("%d*%d= %d",uin,cn,uin*cn);
        printf("\n");
    }
    return 0;
}
