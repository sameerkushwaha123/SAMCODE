#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number untill you want to do sum of even number:");
	scanf("%d",&n);
	if(n%2==0)
	{
	for(int i=2;i<=n;i+=2)
	sum=sum+i;
	printf("sum=%d",sum);
}
else
{
for(int i=2;i<n;i+=2)
sum=sum+i;
printf("sum=%d",sum);
}
	return 0;
}
