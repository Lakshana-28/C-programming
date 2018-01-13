
#include<stdio.h>
int main(void)
{
  int num,i,rev=0,rem,cnt=0,temp;
  scanf("%d",&num);
   temp=num;
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    cnt++;
  }
  if(cnt==2)
  {
    printf("%d is prime number",num);
  }
  else{
    printf("%d is not a prime number",num);
  }
 
  while(num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  if(temp==rev)
  {
    printf("\n%d is a palindrome",temp);
    
  }
  else
  {
    printf("\n%d is not a palindrome",temp);
  }
  
}
