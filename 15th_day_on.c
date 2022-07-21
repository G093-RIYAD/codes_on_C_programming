#include<stdio.h>
 int main()
 {
     int i, j, f;
     for(i = 1; i<=3; i++){
        for(j=1; j<=2; j++){
            for(f=1; f<=5; f++){
                printf("Hk");
                printf("\n");
            }
        }
     }
     return 0;
 }
#include<stdio.h>
 int main()
 {
     int i, j, f, l;
     for(i = 1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
     }
     for(f = 1; f<=4; f++){
        for(l=f; l<=4; l++){
            printf("*");
        }
        printf("\n");
     }
     return 0;
 }
