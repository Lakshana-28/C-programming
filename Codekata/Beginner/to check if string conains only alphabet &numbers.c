#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i,alp=0,num=0,s;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='b')||a[i]>='A'&&a[i]<='B')
        {
            alp=1;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            num=1;
        }

    }
    s=alp+num;
    if(s==2)
    {

        printf("yes");
    }
    else{
        printf("no");
    }
}
