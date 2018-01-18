#include <stdio.h>

int main(void) {
           int n,flag=0;
          scanf("%d",&n);
          if(n==0)
         return 0;
          while(n!=1)
        {
            if(n%2!=0)
            flag=1;
            n=n/2;
        }
if(flag==0)
printf("yes");
else
printf("no");
  return 0;
}
