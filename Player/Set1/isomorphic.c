#include <stdio.h>
#include<string.h>

int main(void) {

	char str[100],str1[100];

	scanf("%s %s",str,str1);

	int l1,l2,a,b,c,d,e,f,flag=0,i,j;

	l1=strlen(str);

	l2=strlen(str1);

	if(l1!=l2)
	{
		printf("no");
	}
	else
	{

	for(i=0;i<l1;i++)

	{

		for(j=i+1;j<l1;j++)

		{

			a=str[i];
			b=str[j];
			c=str1[i];
			d=str1[j];
			e=a-b;
			f=c-d;

			if(e==f)

			{

				flag=1;

			}

			else

			{

				flag=0;

				break;

			}

		}

	}

	}

 if(flag==1)

	{

		printf("yes");

	}

	else

	{

		printf("no");

	}

	return 0;

}
