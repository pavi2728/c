include<stdio.h>
#include<string.h>
int main(void)
{
	char c[10],rev[10];
	int i,length,j;
	scanf("%s",c);
	length=strlen(c);
	for(i=0,j=length;i<length&&j>0;i++,j--)
	{
	
	
		
		rev[j]=c[i];
	
	}
	for(j=0;j<=length;j++)
	printf("%c",rev[j]);
	for(i=0;i<length;i++)
	{
		if(rev[i]=='a'||rev[i]=='e'||rev[i]=='i'||rev[i]=='o'||rev[i]=='u')
		{
		rev[i]=rev[i+1];
		}
		
	}
	int l=strlen(rev);
	for(i=0;i<l;i++)
	printf("\n%c",rev[i]);
	return 0;
	
}
