#include<stdio.h>
int main(void)
{
  int n,a[1000],max,i;
  //scanf("%d",&n);
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<10;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  printf("%d",max);
  
 
}
