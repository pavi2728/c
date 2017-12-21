#include<string.h>
int main(void)
{
	char c[10],rev[10];
	int i,length,j,l;
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
		for(j=i;j<length;j++)
		{
		rev[j]=rev[j+1];
		}
		length--;
		}
	}

	for(i=0;i<=length;i++)
	printf("\n%c",rev[i]);
	return 0;
	
}


