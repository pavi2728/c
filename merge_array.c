#include <stdio.h>
int main(void) {
	int a[100],b[100],n1,n2,i=1,j,t;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{scanf("%d",&a[i]);}
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{scanf("%d",&b[i]);}
	t=n1+n2;
	for(i=n1;i<t;)
	{
		for(j=0;j<n2;j++)
		{
			a[i]=b[j];
			i++;
		}
	}
	for(i=0;i<t;i++)
	printf("%d\t",a[i]);
	return 0;
}
