#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[100];
   int i,j,cnt=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       for(j=i+1;a[j]!='\0';j++)
       {
           if(a[i]==a[j])
           {
               cnt++;
           }
       }
   }
   if(cnt==0)
   {
       printf("yes");
   }
   else{
    printf("no");
   }
}
