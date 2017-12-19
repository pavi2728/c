#include <stdio.h>

int main(void) {
	int n,m,i;
    scanf("%d,%d",&n,&m);
    for(i=n;i<=m;i++)
    {
    if(i%2!=0)
    {
     printf("%d\n",i);
    }
    }

	return 0;
}
