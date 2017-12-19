
#include<stdio.h>
int main(void)
{
  int n,cnt=0;
  scanf("%d",&n);
  while(n!=0)
  {
    n=n/10;
    cnt++;
  }
  printf("Number of dgits is %d",cnt);
}
