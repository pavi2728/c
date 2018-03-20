#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int l,i,temp;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	
	            if((i+1)%2!=0)
		{
		  temp=a[i+1];
		  a[i+1]=a[i];
		  a[i]=temp;
		  
		  
		}
		
	}
	for(i=0;i<l;i++)
	printf("%c",a[i]);
	return 0;
}
