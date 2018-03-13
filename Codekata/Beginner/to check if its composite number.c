#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,cnt=0;
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    cnt++;
  }
  if(cnt>2)
  {
    printf("yes");
  }
  else{
    printf("no");
  }

}
