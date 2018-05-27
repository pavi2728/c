. #include <stdio.h>

int main(void) {

	int i,n,j,count=0,a[100];

	scanf("%d",&n);

            for(i=0;i<n;i++)

	{

	scanf("%d ",&a[i]);

	}

	for(i=0;i<n;i++)

	{

	

		for(j=0;j<n;j++)

		{

			if(a[i]==a[j])

			count++;

		}

		if(count==1)

		printf("%d",a[i]);

	}

	return 0;

}

