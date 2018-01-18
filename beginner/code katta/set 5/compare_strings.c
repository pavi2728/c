#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100],b[100];
    int i,sum1=0,sum2=0;
    scanf("%s %s",a,b);
    for(i=0;i<strlen(a);i++)
{
  sum1=sum1+a[i];
}
 for(i=0;i<strlen(b);i++)
{
  sum2=sum2+b[i];
}
if(sum1>sum2)
{ printf("%s",a);}
else if(sum2>sum1)
{printf("%s",b);}
else
{printf("%s",a);}
return 0;
}
    
