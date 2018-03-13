#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("\t%d",b);
}
