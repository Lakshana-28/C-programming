#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,c,i;
    printf("%d\t""%d",a,b);
    for(i=0;i<8;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
    }
    return 0;
}
