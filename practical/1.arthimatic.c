#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the two Number\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator for \n addition(+)\n subtraction(-) \n division(/)\n multiplation(*)\n");
    char op;
    proper_op:
    scanf(" %c",&op);
    switch(op)
    {
        case ('+'):
        printf("The answer is %d",a+b);
        break;
        case ('-'):
        printf("The answer is %d",a-b);
        break;
        case('/'):
        printf("The answer is %d",a/b);
        break;
        case('*'):
        printf("The answer is %d",a*b);
        break;
        default:
        printf("\nPlease enter the correct operator\n");
        goto proper_op;
    }
}