#include<stdio.h>
int main(void)
{
  char a[90];
  int i,cnt=0;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='0' && a[i]<='9')
    {
      cnt++;
    }
  }
  printf("%d",cnt);
}
