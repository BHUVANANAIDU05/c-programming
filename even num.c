#include<stdio.h>
main()
{
	int i,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
		printf("%d\n",i);
		i+=2;
	}
}
