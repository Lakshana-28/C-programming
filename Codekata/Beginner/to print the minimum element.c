#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,temp,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
           {

               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }


        }
    }


        printf("%d",a[0]);


}
