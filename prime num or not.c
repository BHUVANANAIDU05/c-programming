#include<stdio.h>
main()
{
	int num,i=1,c=0;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
		c++; 
		i++;
	}
		if(c==2)	
		printf("prime number"); 
		else
	   	printf(" it is not a prime number");
	   	
}
