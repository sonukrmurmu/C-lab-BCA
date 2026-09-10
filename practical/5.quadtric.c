#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("The equation should be strictly in quadtric equation form\n");
    printf("it should look like this = ax^2 + bx +c\n");
    printf("Enter the value of a b c\n");
    scanf(" %f  %f %f",&a,&b,&c); 
    float sqr = b*b - (4*a*c);
    if (a == 0) {
    printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
    }
    else if(sqr < 0)
    {
        printf("It is imaginary number");
    }else
    {
    float sqrttt = sqrtf(sqr);
    float ans1 = (-b+sqrttt)/(2*a);
    float ans2 = (-b-sqrttt)/(2*a);
    printf("The answer of given equation is %.4f and %.4f\n",ans1,ans2);
    printf("It is a real and distinct value");
    }
    if(sqr == 0)
    {
        printf("It is real and equal solution");
    }
    return 0;
}