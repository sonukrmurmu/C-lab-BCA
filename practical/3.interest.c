#include <stdio.h>
int simple(int p, int r, int t)
{
    int simple = ((p*r*t)/100);
    printf("The simple interest is %d",simple);
    return 0;
}
float compound(int p, int r , int t)
{
    float pp = p, rr = r , tt = t;
    float amount = pp;
    if(t != 0)
    {
    float ci = (1.0+rr/100.0);
    float oldci = ci;
    for(int i=2;i<=t;i++)
    {
        ci=ci*oldci;
    }
    amount = (pp*ci);
    }
    float cci = amount - pp;
    return cci;
}

int main()
{
    int p,r,t,choice;
    float compound1;
    printf("Enter the Principal\n");
    scanf(" %d",&p);
    printf("Enter the Rate\n");
    scanf(" %d",&r);
    printf("Enter the time\n");
    scanf(" %d",&t);
    printf("Enter 1 for simple interest\nEnter 2 for compound interest\n");
    repeat_choice:
    scanf(" %d",&choice);
    switch(choice)
    {
        case(1):
        simple(p,r,t);
        break;
        case(2):
        compound1 = compound(p,r,t);
        printf("The compound interest is %4f\n",compound1);
        break;
        default:
        printf("Enter the proper option\n");
        goto repeat_choice;
    }
    return 0;
}