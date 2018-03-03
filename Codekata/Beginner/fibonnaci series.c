#include<stdio.h>
int main(void)
{
  int a=1,b=1,c,n,i;
  scanf("%d",&n);
  printf("\t%d",a);
  printf("\t%d",b);
  for(i=0;i<n;i++)
  {
    c=a+b;
    printf("\t%d",c);
    a=b;
    b=c;
  }
}
