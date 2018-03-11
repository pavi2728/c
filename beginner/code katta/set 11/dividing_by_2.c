#include <stdio.h>
#include <string.h>
int main(void) 
{
	int n,dig;
    scanf("%d",&n);
    while(n!=1)
   {
     if(n%2!=0)
     {
      dig=n;
      break;
   }
    n=n/2;}
  printf("%d",n);

return 0;
}
