#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,n,sum=0;
    float avg=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f",avg);
}
