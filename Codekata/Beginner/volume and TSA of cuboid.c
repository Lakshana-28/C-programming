#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,vol,tsa;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    vol=a*b*c;
    tsa=2*(a*b)+(b*c)+(c*a);
    printf("%d",vol);
    printf("\n");
    printf("%d",tsa);
}
