#include <stdio.h>
#include<string.h>
int main(void)
{
 char a[1000];
 int l,i,count=0;
 scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
   {
      if(a[i]==a[i+1]){
      count++;}
   }
   if(count>0)
   printf("No");
   else
  printf("Yes");
 return 0;
}
