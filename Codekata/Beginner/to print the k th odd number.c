#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,k,n;
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
            if(k%2!=0)
            {
                printf("%d",k);
            }
            else{
                printf("%d",a[i+1]);
            }
        }
    }
}
