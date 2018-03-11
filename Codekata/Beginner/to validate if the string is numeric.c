#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000];
    int i,cnt=0,l;

    scanf("%s",a);
     l=strlen(a);
   // printf("%d",l);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            cnt=cnt+1;
        }

    }
    if(l==cnt)
    {
        printf("yes");
    }
    else{
            printf("no");
        }
}
