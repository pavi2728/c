#include <stdio.h>

int main(void) {
	long int n,l,r;
    scanf("%ld",&n);
    scanf("%ld %ld",&l,&r);
    if(n>l && n<r)
    printf("yes");
    else
    printf("no");
	return 0;
}
