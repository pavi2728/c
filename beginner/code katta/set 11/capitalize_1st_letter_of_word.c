#include<stdio.h>
#include<string.h>
int main(void) {
char a[100];
int len,i;
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{
                if(i==0)
                {
                a[0]=toupper(a[0]);
                }
                if(a[i]==' ')
                {
                a[i+1]=toupper(a[i+1]);
                }
}
printf("%s",a);
return 0;
}
