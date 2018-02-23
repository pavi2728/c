#include <stdio.h>

int main(void) {
	char a[20];
     int l,i,flag=0;
     scanf("%s",a);
     l=strlen(a);
     for(i=0;i<l;i++)
     {
       if(a[i]=='0'|| a[i]=='1')
       { 
       flag=1;
       }
      else
      {
        flag=0;
       }
     }
    if(flag==1)
    printf("yes");
    else
    printf("no");

	return 0;
}
