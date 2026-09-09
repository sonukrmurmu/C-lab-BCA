#include <stdio.h>
int leap()
{
    printf("Enter a year two check for leap year");
    int year;
    scanf("%d",&year);
    if(year%4 == 0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}

int noofleap()
{
    printf("Enter two year to find the no of leap year");//this strictl check the between year
    int year1,year2,j=0; //entered year r not counteds
    int year = year1;
    scanf(" %d %d",&year1,&year2);

    for(int i = 0;i<=(year2-year1);i++)
    {
        if(year%4 == 0)
        {
            year = year+1;
            j++;
        }
    }
    printf("the number of leap year is %d",j);
    return 0;
}

int main()
{
    printf("Enter what to find \n");
    repeat_loop:
    printf("1 for leap year\n2 for no of loop year");
    int choice;
    scanf("%d",&choice);
    if(choice == 1)
    {
        leap();
    }else if(choice == 2)
    {
        noofleap();
    }else
    {
        printf("Wrong input");
        goto repeat_loop;
    }
}