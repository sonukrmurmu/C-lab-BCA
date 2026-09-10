#include <stdio.h>
int main()
{
    int p;
    printf("Enter a number to check for palindrome\n");
    scanf("%d",&p);
    int org = p;
    int pr=0;
    for(int i=1;p>0;i++)
    {
        int div = p%10;
        pr = (pr*10)+div;
        p = p/10;
    }
    if(p == org)
    {
        printf("%d it is a palindrome\n",p);
    }else
    {
        printf("%d is not a palindrome\n",p);
    }
    printf("The reverse number is %d\n",pr);
    return 0;
    
}