#include <stdio.h>

int main(void) {
	int l,b,h,vol,tsa;
	scanf("%d %d %d",&l,&b,&h);
	vol=l*b*h;
	tsa=(2*((l*b)+(b*h)+(h*l)));
	printf("%d %d",vol,tsa);
	return 0;
}
