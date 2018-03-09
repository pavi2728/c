#include <stdio.h>
int main(void)
{
 long int a,b;
 char c;
 int i;
 for(i=0;i<4;i++)
 {
    scanf("%ld %c %ld",&a,&c,&b);
    if(c=='/')
    {
       printf("%ld\n",a/b);
}
else if(c=='%')
   {
      printf("%ld\n",(a%b));
}
}
return 0;
}
