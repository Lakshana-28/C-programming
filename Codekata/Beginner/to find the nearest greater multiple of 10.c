#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("%d",n);
    }
    else{
    for(i=1;;i++)
    {
        s=n+i;
        if(s%10==0)
        {
            printf("%d",s);
            break;
        }
    }
}
}
