#include <stdio.h>

int main(void) {
           long int a[100],n,i,max=0;
           scanf("%ld",&n);
           for(i=0;i<n;i++)
           scanf("%ld",&a[i]);
           max=a[0];
           for(i=0;i<n;i++)
           {
           	if(a[i]>max)
           	max=a[i];
           }
           printf("%ld",max);
	return 0;
}
