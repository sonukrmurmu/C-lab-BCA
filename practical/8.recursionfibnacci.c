#include <stdio.h>
int fibo(int n,int limits)
{
   static int a = 1, b = 0, c = 0, ans = 0;
   int mods = n%2;
  
   if(n>limits-1)
   {return ans;}
   else if(mods == 0)
   {
      printf(" %d ",c);
      ans = ans + c;
      b=c,c=a+c;
   
      fibo( n+1, limits);
   }
   else
   {
      printf(" %d ",c);
       ans = ans + c;
      a=c,c=b+c;
     
      fibo( n+1 , limits);
   
   }
   return ans;  
}

int main()
{
   int limits;
   int n=0;
   printf("Enter a Number to print fibonacci sequence upto\n");
   scanf("%d",&limits);
   int final_ans = fibo(n,limits);
   printf("\n%d is the sum of all fibonacci series",final_ans);
   return 0;
}