#include <stdio.h>

int main(void) {
	int minutes,n,hr;
    scanf("%d",&n);
    if(n<60)
    {
       printf("0 %d",n);
    }
    else if(n>=60)
   {
    minutes=n%60;
    hr=n/60;
    printf("%d %d",hr,minutes);
   }
	return 0;
}
