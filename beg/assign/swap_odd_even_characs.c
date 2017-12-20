#include <stdio.h>
#include<string.h>
int main(void) {
	char c[20];
int i,length,temp;
    scanf("%s",c);
   length=strlen(c);
   for(i=0;i<length;i++)
{
if(i%2==0)
{
temp=c[i];
c[i]=c[i+1];
c[i+1]=temp;
}
}
for(i=0;i<=length;i++)
{
printf("%c",c[i]);
}
return 0;
}
