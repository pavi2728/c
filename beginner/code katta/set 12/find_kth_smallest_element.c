#include <stdio.h>
int main(void)
{
int n,a[20],min=0 ,i,k,j=1,temp;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);}
min=a[1];
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
                         if(a[j]<a[i])
           		            {
           	               temp=a[j];
           	               a[j]=a[i];
           	               a[i]=temp;
                           }
}
}
for(i=1;i<=n;i++)
{
if(i==k)
{
printf("%d",a[i]);
}
}
return 0;
}
