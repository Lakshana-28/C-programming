#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],c[1000],i,n,j=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt=cnt+1;
        c[j]=cnt;
        j++;
    }
    for(i=0,j=0;i<n,j<cnt;i++,j++)
    {
        if(a[i]!=c[j])
        {
            printf("%d",a[i]);
        }
    }
}
