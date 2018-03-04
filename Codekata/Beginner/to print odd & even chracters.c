#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[100],odd[100],even[100];
   int i,k=0,j=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(i%2==0)
       {
           odd[j]=a[i];
           j++;
       }
       else{
        even[k]=a[i];
        k++;
       }
   }
   for(i=0;i<j;i++)
   {
       printf("%c",odd[i]);
   }
   printf("\n");
    for(i=0;i<k;i++)
   {
       printf("%c",even[i]);
   }
}
