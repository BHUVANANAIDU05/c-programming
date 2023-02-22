#include<stdio.h>
main()
{
	int i,n,even,odd;
	printf("enter the limit\n");
	scanf("%d",&n);
	i=even=odd;
	while(i<=n)
	{
	
		if(i%2==0)
		even+=i;
		else if(i%2!=0)
		odd+=i;
		i++;
	}
	printf("even sum=%d\n",even);
	printf("odd sum=%d\n",odd);
	printf("differene b/w even and odd sum=%d\n",even-odd);
}
