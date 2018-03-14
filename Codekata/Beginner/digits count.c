#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cnt=0,i,n;
  scanf("%d",&n);
  while(n!=0)
  {
      i=n%10;
      n=n/10;
      cnt++;
  }
  printf("%d",cnt);
}
