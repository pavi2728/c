#include <stdio.h>
#include<math.h>
int main(void) {
	long int a,b,diff=0;
	 int i;
	for(i=0;i<3;i++)
	{
    scanf("%ld %ld",&a,&b);
    diff=abs(a-b);
    printf("%ld",diff);
	}
	return 0;
}
