#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100];
    int i,l,count=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    { 
       if((s[i]>='a' && s[i]<='z') || (s[i]>=0 && s[i]<=9))
       count++;
     }
   if(count>=1)
   printf("Yes");
   else
   printf("No");
   
return 0;
}
