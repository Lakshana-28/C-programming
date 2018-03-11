#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i,sum=0,b;
    scanf("%d",&no);
    b=no;
    while(no!=0){
    i=no%10;
    sum=sum+i*i*i;
    no=no/10;
}
if(sum==b)
{
    printf("yes");
}
else{
    printf("no");
}
}
