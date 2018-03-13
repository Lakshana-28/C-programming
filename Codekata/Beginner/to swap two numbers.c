#include<stdio.h>
int main(void)
{
  int a,b,temp;
  scanf("%d",&a);
  scanf("%d",&b);
  temp=a;
  a=b;
  b=temp;

printf("%d",a);
printf("\t%d",b);
}
