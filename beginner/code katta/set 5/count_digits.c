#include <stdio.h>

int main(void) {
	int n,dig=0;
   scanf("%d",&n);
   while(n!=0)
    { 
      n=n/10;
      dig++;
     }
printf("%d",dig);
      return 0;
}
