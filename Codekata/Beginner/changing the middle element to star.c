#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,l,m,i;
   char a[100];
   scanf("%s",a);
   l=strlen(a);
   if(l%2!=0){
   m=l/2;
  a[m]='*';
  for(i=0;a[i]!='\0';i++)
  {
      printf("%c",a[i]);
  }
   }
   else{
    m=l/2;
    a[m]='*';
    a[m+1]='*';
    for(i=0;a[i]!='\0';i++)
  {
      printf("%c",a[i]);
  }

   }
}
