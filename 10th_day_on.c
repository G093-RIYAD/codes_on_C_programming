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
#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d\n",x++);
    printf("%d\n",++x);
    x = 5;
    printf("%d\n",++x);
    printf("%d\n",x++);
    x = 5;
    printf("%d\n",x--);
    printf("%d\n",--x);
    x = 5;
    printf("%d\n",--x);
    printf("%d\n",x--);
    return 0;
}
#include <stdio.h>
int main()
{
    if(1 == 2 != 0){
        printf("Hi\n");
    }
    else{
        printf("Hellow");
    }
    return 0;
}
#include <stdio.h>
int main() {
char name[10];
int age;
printf("Enter your first name and age: \n");
scanf("%s %d", name, &age); 
printf("You entered: %s %d",name,age);
}
#include <stdio.h>
int main() {
char full_name[25];
printf("Enter your full name: ");
gets(full_name);
printf("My full name is %s ",full_name);
return 0;
}
#include <stdio.h>
int main() {
char name[10];
printf("Enter your  name plz: ");
fgets(name, 10, stdin);
printf("My name is %s ",name);
return 0;}
#include <stdio.h>
int main()
{char town[40];
  printf("Enter your town: ");
  gets(town);
  fputs(town, stdout);
  return 0;}
