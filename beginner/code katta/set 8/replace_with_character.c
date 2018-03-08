#include <stdio.h>
#include<string.h>
int main(void)
{
char a[100],s[100];
int i,l,b;
scanf("%s",a);
l=strlen(a);
b=l/2;
if(l%2==0)
{
   a[b]='*';
   a[b-1]='*';
    printf("%s",a);
}
else
{
a[b]='*';
printf("%s",a);
}
return 0;
}
