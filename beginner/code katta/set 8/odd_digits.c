#include <stdio.h>

int main(void) {
	int n,i,rem=0,b=0;
    scanf("%d",&n);
    while(n>0)
     {
       rem=n%10;
       n=n/10;
       b=rem%2;
     
     if(b!=0)
     {
       printf("%d ",rem);
    }

      }  
    
  return 0;
}
