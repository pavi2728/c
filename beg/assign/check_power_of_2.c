#include<stdio.h>

int main(void)
{
          int n,i,status=0;
          scanf("%d",&n);
         while(n!=1)
          {
          	if(n%2!=0){
          	status=1;
          	break;
          	}
          	n=n/2;
          }
          if(status==1)
          printf("not power of 2");
          else
          printf("power of 2");
          return 0;
          }
