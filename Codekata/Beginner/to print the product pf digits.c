#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pro=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        pro=pro*i;

        n=n/10;
    }
printf("%d",pro);
}
