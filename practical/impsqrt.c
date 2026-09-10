#include <stdio.h>
float sqrttt(float *a)
{
    float i,j = 1;
    for(i=0;*a>0;i++)
    {
        *a=*a-j;
        j=j+2;
    }
    return i;
}
int main()
{

    float sq,ans,b;
    printf("Enter the Square Number");
    scanf("%f",&sq);
    float ogsq = sq;
    float a=sqrttt(&sq);
    b=a-1;
    if(sq == 0)
    {
        printf("%.4f is the square root of give number",a);
    }else if(a*a - ogsq >= ogsq - b*b)
    {
        ans = b + ((ogsq-(b*b))/(2*b));
        printf("%.5f is the answer",ans);
    }
    else
    {
         ans = a + ((ogsq-(a*a))/(2*a));
        printf("%.5f is the answer",ans);
    }
    return 0;
}