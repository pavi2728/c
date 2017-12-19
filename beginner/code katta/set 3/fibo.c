#include <stdio.h>

int main(void) {
	int a=0,b=1,c,n,i;
scanf("%d",&n);
printf("%d\n",a);
   printf("%d\n",b);
   for(i=1;i<n-1;i++)
   {

   c=a+b;
   a=b;
   b=c;
   printf("%d\n",c);
}
	return 0;
}
