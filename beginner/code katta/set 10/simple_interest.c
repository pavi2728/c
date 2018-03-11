#include <stdio.h>
#include<math.h>
int main(void) {
	int p,t,r,si,f;
    scanf("%d %d %d",&p,&t,&r);
    si=(p*t*r)/100;
    f=floor(si);
    printf("%d",f);
	return 0;
}
