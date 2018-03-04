#include <stdio.h>

int main(void) {
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count>0)
{
printf("not prime");
}
else
{
printf("prime");
}
return 0;
}
