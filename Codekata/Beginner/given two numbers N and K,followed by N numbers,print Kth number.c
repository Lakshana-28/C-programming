#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[1000],i,n,k;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(k==a[i])
       {
           printf("%d",k);
           break;
       }

   }

}
