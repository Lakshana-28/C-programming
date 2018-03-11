#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a,d,s,A,N,m;
   scanf("%d",&n);
   scanf("%d",&a);
   scanf("%d",&d);
    N=n-1;
    A=2*a;
    m=N+A;
    s=n/2*m*d;
    printf("%d",s);
}
