#include <stdio.h>

int main(void) {

	int i,n,m,j,count=0,a[100],b[100];

	scanf("%d %d",&n,&m);

            for(i=0;i<n;i++)

	{

	scanf("%d ",&a[i]);

	}
	for(i=0;i<m;i++)

	{

	scanf("%d ",&b[i]);

	}


	for(i=0;i<n;i++)

	{

	

		for(j=0;j<n;j++)

		{

			if(a[i]==b[j])
			{

			count++;
			}

		}
	}

		if(count>=1)
		{

		printf("YES");
		}
		else
		{
			printf("NO");
		}

	

	return 0;

}
