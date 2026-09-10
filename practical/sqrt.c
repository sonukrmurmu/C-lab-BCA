#include <stdio.h>
int main()
{
    printf("Enter the perfect square number to find square root of");
    int sqrt;
    scanf("%d",&sqrt);
    int i,j = 1;
    for(i=0;sqrt != 0;i++)
    {
        sqrt=sqrt-j;
        j=j+2;
    }
    printf("%d",i);
    return 0;
}