#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[100];
   int i,n;
   scanf("%s",a);
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%c",a[i]);
   }
}
