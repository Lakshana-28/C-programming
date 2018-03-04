#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,sum;
   scanf("%d",&a);
   scanf("%d",&b);
   sum=a+b;
   if(sum%2==0)
   {
       printf("even");
   }
   else{
    printf("odd");
   }
}
