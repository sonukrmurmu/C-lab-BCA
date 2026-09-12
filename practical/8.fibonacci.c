#include <stdio.h>
int main()
{
    int limit;
    int n = 2;
    int a=0,b=1,c=0,ans=0;
    printf("Enter the Number to see fibonacci series upto\n");
    scanf("%d",&limit);
    while(n <= limit+1)
    {
        printf(" %d ",c);
        ans = ans+c;
        int modds = n%2;
        if(modds == 0)
        {a=c,c=b+c;}
        else
        {b=c,c=a+c;}
        n++;
    }
       printf("\n%d is sum of all fibonacci",ans);
    return 0;
}