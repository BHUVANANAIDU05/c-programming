//ASSIGNMENT-1//
#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,sum=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		sum=sum+a[i];
		for(i=0;i<n;i++)
		printf("%d\n",sum-a[i]);
	}
	return 0;
}
