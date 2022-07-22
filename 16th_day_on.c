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
