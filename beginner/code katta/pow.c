#include<stdio.h>
int main(void)
{
int n,pow=1,l,i;
scanf("%d,%d",&n,&l);
for(i=1;i<=l;i++)
{
pow=pow*n;
}
printf("%d",pow);
	return 0;
}
