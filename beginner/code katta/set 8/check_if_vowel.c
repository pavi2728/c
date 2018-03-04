#include <stdio.h>

int main(void) {
	char a[20];
     int l,i,flag=0;
     scanf("%s",a);
     l=strlen(a);
     for(i=0;i<l;i++)
     {
       if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       { 
       flag=1;
       }
     }
    if(flag==1)
    printf("yes");
    else
    printf("no");

	return 0;
}
