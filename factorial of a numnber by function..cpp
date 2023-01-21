#include<stdio.h>
int factorial(long long int n)

{
	long long int fact=1;
	for( long long int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d is the factorial of the number.",fact);
	return fact;
}
int main()
{
	long long int n;
	printf("enter the number:");
	scanf("%d",&n);
	factorial(n);

	return 0;
}
