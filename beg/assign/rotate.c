#include <stdio.h>

int main(void) {
	int a[10],n,k,i,j,first;
    scanf("%d",&n);
    scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=k%n;
for(i=1;i<=k;i++)
{
first=a[0];
for(j=0;j<n;j++)
{
a[j]=a[j+1];
}
a[n-1]=first;
}
for(j=0;j<n;j++)
{printf("%d\t",a[j]);}
return 0;
}
