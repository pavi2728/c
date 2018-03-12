int main(void) {
           int arr[10],i,mini=0;
            for(i=0;i<10;i++)
           scanf("%d",&arr[i]);
           mini=arr[0];
           for(i=0;i<10;i++)
           {
           	if(arr[i]<mini)
           	mini=arr[i];
           }
           printf("%d",mini);
	return 0;
}
