int main(void) {
	int a,b,n,l,m;
    scanf("%d %d",&a,&b);
    n=a*b;
    l=n/a;
    m=n/b;
    if(l==m)
    printf("yes");
    else
    printf("no");
    return 0;
}
