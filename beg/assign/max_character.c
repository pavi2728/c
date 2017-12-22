#include <stdio.h>
#include<string.h>
int main(void) {
	int i,l=0,count=0,max=0,j;
	char s[10],mchar;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
		if(s[i]==s[j])
		count++;
		if(count>max)
		{
			max=count;
			mchar=s[i];
		}
		}
	}
	printf("%c occurs %d times",mchar,max);
	return 0;
}
