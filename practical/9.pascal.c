#include <stdio.h>
unsigned long long int factorial(int n)
{

    unsigned long long int fac=1;
    for(int i = 0;i<=n;i++)
    {
     if(i ==0)
     {
        fac = 1;
    }else
    {
      fac = fac*i;
    }      
    }
    return fac;
}
unsigned long long int main()
{
    printf("Enter the number upto print the pascal");
    unsigned long long int i,j,k;
    scanf(" %d",&k);
    unsigned long long int ans;
    for(i=0;i<=k;i++)
    {
        for(int space = 1; space <= (k-i); space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            unsigned long long int num = factorial(i);
            unsigned long long int dem1 =factorial(j);
            unsigned long long int dem2 = factorial(i-j);
            ans = num/(dem1*dem2); 
            printf(" %lld",ans);
        }
        printf("\n");
    }
    return 0;
}