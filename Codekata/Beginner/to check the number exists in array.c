#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[1000],i,n,k,cnt=0;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==k)
       {

          cnt++;

       }
   }
       if(cnt>0)
       {
           printf("yes");
       }
       else{
        printf("no");
       }
   }


