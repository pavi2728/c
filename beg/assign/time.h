#include <stdio.h>

int main(void) {
	int h1,h2,m1,m2,timeh,timem,time;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h2>h1)
    timeh=h2-h1;
else
timeh=h1-h2;
if(m2>m1)
timem=m2-m1;
else
{
timem=m1-m2;
}
time=(timeh*60)+timem;
printf("%d minutes",time);

	return 0;
}
