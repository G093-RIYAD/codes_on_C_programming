#include <stdio.h>
int main()
{
    int day ;
    printf("Type a number of of week: ");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        default:
            printf("Friday");
            break;
    }
    int n = 4;
    switch(n){
        case 1:
            printf("I don't have any class in saturday");
            break;
        case 2:
            printf("I have lab class in Monday");
            break;
        default:
            printf("I don't have any class in Friday, so you can call it Friday is weekend for me.");
    }
    return 0;
}
