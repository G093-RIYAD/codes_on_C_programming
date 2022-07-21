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
 #include<stdio.h>
 int main()
 {
     int i, j, f, l;
     i = 1;
     while(i<=7){
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
     }
     f = 1;
     while(f<=6){
        l=f;
        while(l<=6){
            printf("*");
            l++;
        }
        printf("\n");
        f++;
     }
     return 0;
 }
