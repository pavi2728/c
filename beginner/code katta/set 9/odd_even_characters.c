#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[20],b[20],c[20];
    int l,i,j=0,k=0;
    scanf("%s",a);
     l=strlen(a);
     for(i=0;i<l;i++)
      {
        if(i%2==0){
        b[j]=a[i];
        j++;
      
         }
        else if(i%2!=0)
         {
           c[k]=a[i];
            k++;
        printf("%c",c[k]);
        }
    }
  for(i=0;i<strlen(b);i++)
   printf("%c",b[i]);
   printf("\t");
 for(i=0;i<strlen(c);i++)
   printf("%c",c[i]);

    return 0;
}
