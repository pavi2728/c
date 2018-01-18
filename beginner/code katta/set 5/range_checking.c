#include <stdio.h>

int main(void) {
	int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
   { 
     if(n>=i && n<=10)
     {count++;}
    }
   if(count=1)
  printf("yes");
else
printf("no");
	return 0;
}
