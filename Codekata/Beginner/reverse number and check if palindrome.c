
#include<stdio.h>
int main(void)
{
  int num,rev=0,rem=0,temp;
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  if(temp==rev){
  printf("yes");
  }
  else{
  printf("no");
  }
  
}
