#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[1000],b[1000];
   int i,n,l,j=0;
   scanf("%s",a);
   scanf("%d",&n);
   l=strlen(a);
   for(i=l-1;i>=0;i--)
   {
       b[j]=a[i];
       j++;

   }
   for(j=0;j<n;j++)
   {
       printf("%c",b[j]);
   }
}
