#include<stdio.h>
main()
{
	int i,n,l;
	printf("enter limit\n");
	scanf("%d",&l);
	printf("table num\n");
	scanf("%d",&n);
	for(i=1;i<=l;i++)
	{
	printf("%dx%d=%d\n",n,i,i*n);
    }
}
