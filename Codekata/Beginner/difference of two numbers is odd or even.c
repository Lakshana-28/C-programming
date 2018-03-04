#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;
    scanf("%d",&a);
    scanf("%d",&b);
    s=b-a;
    if(s%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}
