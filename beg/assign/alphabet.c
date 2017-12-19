#include<stdio.h>
int main(void)
{
	char  c;
  int n;
	scanf("%c",&c);
  n=((int) c);
	if(n>=65 && n<=122)
	printf("alphabet");
	else
	printf("not alphabet");
	return 0;
  }
