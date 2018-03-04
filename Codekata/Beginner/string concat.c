#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char a[20];
   char b[20];
   int c,i,j;
   scanf("%s",a);
   scanf("%s",b);
   c=strlen(a);
   for(i=c+1,j=0;b[j]!='\0';i++)
   {
       a[i]=b[j];
       j++;
   }
   a[i]='\0';
   for(i=0;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
   }

    return 0;
}
