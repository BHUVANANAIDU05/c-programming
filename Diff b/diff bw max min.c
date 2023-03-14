#include<stdio.h>
main()
{
	int n,i,max,a[n],min;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	max=a[i];
	}
	printf("%d ",max);
    min=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	min=a[i];
	}
	printf("%d ",min);
	printf("diff=%d\n",max-min);
}
