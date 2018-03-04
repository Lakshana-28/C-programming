#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,pro;
    scanf("%d",&a);
    scanf("%d",&b);
    pro=a*b;
    if(pro%2==0)
    {
        printf("even");

    }
    else{
        printf("odd");
    }
}
