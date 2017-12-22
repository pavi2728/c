#include <stdio.h>
#include<string.h>
int main(void) {
	char a[20],i,alpha=0,digit=0,l=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		alpha++;
		else
		digit++;
		
	}
	printf("Alphabets=%d\n",alpha);
	printf("Numbers=%d\n",digit);
	return 0;
}
