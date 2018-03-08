#include <stdio.h>

int main(void) {
	int a,b,n,i;
    scanf("%d %d",&a,&b);
    n=a*b;
    for(i=0;i<=n;i++)
    {
      if(n==i*i)
{
      printf("yes");
      return 0;
}
      
}
    printf("no");
    return 0;
}


