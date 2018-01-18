#include <stdio.h>

int main(void) {
	long int n,dig=0;
   scanf("%ld",&n);
   while(n!=0)
    { 
      n=n/10;
      dig++;
     }
printf("%ld",dig);
      return 0;
}
