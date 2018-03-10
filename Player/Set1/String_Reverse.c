#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",&a);
	int n=strlen(a);
	for(int i=n;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
