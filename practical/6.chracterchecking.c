#include <stdio.h>
int main()
{
    printf("Enter a chracter to check for chracter types");
    char c;
    scanf("%c",&c);
    if(c >= 'A' && c <= 'Z' )
    {
        printf("It is a uppercase character");
    }else if( c >= 'a' && c <= 'z')
    {
        printf("It is a lowercase chracter");
    }
    else if(c >= '0' && c <= '9')
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is a special chracter");
    }
    return 0;
}