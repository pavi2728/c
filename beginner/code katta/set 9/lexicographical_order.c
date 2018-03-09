#include <stdio.h>
#include<string.h>
int main(void) {
     char a[100],temp[100];
     int l,i,k=0,j;
     scanf("%s",a);
     l=strlen(a);
     for(i=0;i<l;i++)
     {
       for(j=0;j<i;j++)
       {
           if(a[j]>a[j+1])
          {
             temp[k]=a[j];
             a[j]=a[j+1];
             a[j+1]=temp[k];
             
         }
}
}
  for(i=0;i<l;i++)
printf("%c",a[i]);          

     
	return 0;
}
