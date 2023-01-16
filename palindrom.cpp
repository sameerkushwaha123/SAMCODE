#include<stdio.h>
int main()
{
	int n,sum=0,rem,count;
	printf("enter the number:");
	scanf("%d",&n);
	int q=n;
	while(n)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(q==sum)
	{
		printf("palindrom");
	}
	else
	{
		printf("not palindrom");
	}
	return 0;
}
