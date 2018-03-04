
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[100],n,i,k=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        if(i%2!=0){
        a[k]=i;
        k++;
        }
        //printf("%d\t",a);
        n=n/10;

    }
    for(k=k-1;k>=0;k--)
    {
        printf("%d\t",a[k]);
    }
}
