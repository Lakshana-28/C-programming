#include<stdio.h>
#include<string.h>
int main(void)
{
  char a[90];
  int i,letter=0,space=0;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>=97&&a[i]<=126||a[i]>=65&&a[i]<=90||a[i]>=33&&a[i]<=64)
    {
      letter++;
    }
    else if(a[i]==' ')
    {
      space++;
    }
  }
  printf("%d",letter);
}
