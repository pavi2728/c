#include <stdio.h>

int main(void) {
	long int a,b,temp;
scanf("%ld %ld",&a,&b);
temp=a;
a=b;
b=temp;
printf("%ld %ld",a,b);
	return 0;
}

