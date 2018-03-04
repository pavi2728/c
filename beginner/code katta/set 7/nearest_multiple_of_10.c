#include <stdio.h>

int main(void) {
    int n,rem,mul;
    scanf("%d",&n);
   rem=n%10;
   mul=n+(10-rem);
   printf("%d",mul);
  return 0;
}
