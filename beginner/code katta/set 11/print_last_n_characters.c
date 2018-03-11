#include <stdio.h>
#include <string.h>
int main(void) 
{
	char a[15];
	int n,l;
	scanf("%s",a);
	scanf("%d",&n);
	int len=strlen(a);
	for(int i=0;i<n;i++)
	{
	            l=len-1;
		printf("%c",a[l]);
		len--;
	}
	return 0;
}
