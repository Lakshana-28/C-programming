#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0,n;
   scanf("%d",&n);
   while(n!=0)
   {
       i=n%10;
       sum=sum+i;
       n=n/10;
   }
   printf("%d",sum);
}
