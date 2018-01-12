
#include<stdio.h>
int main(void)
{
  int i,n,mul;
  scanf("%d",&n);
  
  for(i=1;i<=5;i++)
  {
    mul=n*i;
    printf("\n%d*%d=%d",n,i,mul);
  }
}
