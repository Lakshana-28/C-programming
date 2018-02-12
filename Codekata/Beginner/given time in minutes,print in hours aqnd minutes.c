#include<stdio.h>
int main(void)
{
  int min,hr=0,minn;
  scanf("%d",&min);
  if(min>=60)
  {
    minn=min-60;
    hr=min/60;
    printf("%d:%d",hr,minn);
  }
  else{
    printf("%d:%d",hr,min);
  }
  
}
