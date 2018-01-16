#include <stdio.h>

int main(void) {
           long int a[100],n,i,min=0;
           scanf("%ld",&n);
           for(i=0;i<n;i++)
           scanf("%ld",&a[i]);
           min=a[0];
           for(i=0;i<n;i++)
           {
           	if(a[i]<min)
           	min=a[i];
           }
           printf("%ld",min);
	return 0;
}
