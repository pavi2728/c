. #include <stdio.h>

int main(void) {
	int a[100],n,i,j=0,b[100],count=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
		 b[j]=a[i];
		 j++;
		 count++;
		}
	}
	for(i=0;i<count;i++)
	{
		int k=0;
		for(k=i+1;k<count;k++)
		{
		 if(b[i]>b[k])
		 {
		 	temp=b[i];
		 	b[i]=b[k];
		 	b[k]=temp;
		 }
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;

