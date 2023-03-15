int missingNumber(int* nums,int n){
	
	int overallsum=n*(n+1)/2;
		int sum=0,i;
		for(i=0;i<n;i++)
		sum=sum+nums[i];
		return overallsum-sum;

}
