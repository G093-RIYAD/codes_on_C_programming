#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 4) {
        break; //Used to learn break statment.
        }
    printf("%d\n", i);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 4) {
        continue;//Used to learn Continue statment.
        }
    printf("%d\n", i);
    }
    return 0;
}
// Break and Continue on  while loop
#include<stdio.h>
int main()
{
    int i=0;
    while(i < 10) {
        if (i == 4) {
        break;
        }
    printf("%d\n", i);
    i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i=0;
    while(i < 10) {
        if(i==5){
            
            continue;
        }
    printf("%d\n", i);
    i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i=0;
    while(i < 10) {
        if(i%2==0){
            i++;
            continue;
        }
    printf("%d\n", i);
    i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    float a[5];
    int i;
    for(i=0; i<5; i++){
        scanf("%f",&a[i]);
    }
    for(i=0; i<5; i++){
        printf("%.2f\n",a[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[10],i,c=0;
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        c = c + a[i];
    }
    printf("The total ans: %d",c);
    return 0;
}
#include<stdio.h>
int main()
{
    int a[7]={-99,45,100,37,89,-327,245};
    int max = a[0],i;
    for(i=1;i<7;i++){
        if(a[i]>max){
            max= a[i];

        }
    }
    printf("max digit: %d",max);
    return 0;
}
