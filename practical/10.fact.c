#include <stdio.h>
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n *factorial(n-1);
}
int main()
{
    int fac,recursive,loop=1;
    printf("Enter the number upto print factorial\n");
    scanf("%d",&fac);
    recursive=factorial(fac);
    for (int i = 1; i <= fac; i++) 
    { 
        loop = loop * i; 
    }
    printf("this is the value using loop %d\n",loop);
    printf("this is the value using recursive %d\n",recursive);
    return 0;
    
}