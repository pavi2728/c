#include<stdio.h>
main()
{
          int n,i,s=0;
          scanf("%d",&n);
         while(n!=1)
          {
          	if(n%2!=0){
          	s=1;
          	break;
          	}
          	n=n/2;
          }
          if(s==1)
          printf("not a power of 2");
          else
          printf("power of 2");
}
