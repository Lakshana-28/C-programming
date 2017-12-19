
#include<stdio.h>
int main(void)
{
  int x,y,z;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  if(x>y&&x>z)
  {
    printf("%d is greater",x);
  }
  else if(y>x&&y>z)
  {
     printf("%d is greater",y);
  }
  else
  {
    printf("%d is greater",z);
  }
  
}
