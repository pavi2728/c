#include<stdio.h>
int main(void)
{
	int l,r,i,count=0,j=0,prime=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
	  for(j=2;j<i;j++)
	  {
	  	if(i%j==0)
	  	{
	  	prime=1;
	  	break;
	  	}
	  	else
	  	{
	  		prime=0;
	  	}
	  }
	  	if(prime==0)
	  	{
	  		count++;
	  	}
	  
	}
	printf("%d",count);
	return 0;
}
