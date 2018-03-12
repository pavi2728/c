#include <stdio.h>
int main(void)
{
int n,a[20],b[20],i,k,count=0,j=1;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);}
for(i=1;i<=n;i++)
{
if((a[i]%2)!=0)
{
b[j]=a[i];
count++;
j++;}
}
for(i=1;i<=count;i++)
{
if(i==k)
{
printf("%d",b[i]);
}
}

return 0;
}
