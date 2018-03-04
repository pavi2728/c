#include<stdio.h>
#include<math.h>
int main(void)
{
int n,r1,i,r2,r3;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
r1=pow(2,i);
if(r1>n)
{
r2=i;
break;
}
}
r3=pow(2,r2);
printf("%d",r3);
return 0;
}
