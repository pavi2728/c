#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100],b[100];
int l=0,i,flag=0,j=0;
scanf("%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
for(flag=1,i=0;i<l;i++)
{
if(b[i]!=a[i])
flag=0;
}
if(flag==1)
printf("yes");
else
printf("no");
return 0;
}
