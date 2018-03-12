#include <stdio.h>

int main(void) {
	long int A,C,B,sum=0;
	scanf("%ld %ld %ld",&C,&A,&B);
            sum = (C* (2 * A + (C - 1) *B)) / 2;
	printf("%ld",sum);
	return 0;
}
