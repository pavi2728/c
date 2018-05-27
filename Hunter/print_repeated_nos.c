#include <stdio.h>

int main(void) {
	int n,i,b[100],temp,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d",&b[i]);
	}
           for(i=0;i<n;i++)
	{
		
		for(k=i+1;k<n;k++)
		{
		 if(b[i]>b[k])
		 {
		 	temp=b[i];
		 	b[i]=b[k];
		 	b[k]=temp;
		 }
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(b[i]==b[k])
			{
				printf("%d ",b[i]);
			}
      else
      printf("unique");
		}
	}
	return 0;
}
