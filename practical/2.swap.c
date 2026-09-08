#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first variable to be stored in \"a\" variable\n");
    scanf("%d",&a);
    printf("Enter the second variable to be stored in \"b\" variable\n");
    scanf(" %d",&b); //space is important here guys
    //exchanging operation happening here
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The new value of \"a\" is %d\n",a);
    printf("The new value of \"b\" is %d\n",b);
    return 0;
}