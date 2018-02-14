#include<stdio.h>
#include<string.h>
int main(void)
{
int i,l,cnt=0;
char a[90];
scanf("%[^\n]s",a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]==' '||a[i]=='\0')
{
cnt=cnt+1;
}
}
printf("%d",cnt);
}
