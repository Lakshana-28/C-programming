#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[100];
   int i,l,cnt=0;
   scanf("%s",a);
   l=strlen(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='1'||a[i]=='0')
       {
           cnt++;
       }
   }
   if(l==cnt)
   {
       printf("yes");
   }
   else{
    printf("no");
   }

}
