#include <stdio.h>
long long int factorial(int n)
{

    long long int fac=1;
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
long long int main()
{
    printf("Enter the number upto print the pascal");
    long long int i,j,k;
    scanf(" %d",&k);
    long long int ans;
    for(i=0;i<=k;i++)
    {
        for(int space = 1; space <= (k-i); space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            long long int num = factorial(i);
            long long int dem1 =factorial(j);
            long long int dem2 = factorial(i-j);
            ans = num/(dem1*dem2); 
            printf(" %lld",ans);
        }
        printf("\n");
    }
    return 0;
}