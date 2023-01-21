#include<stdio.h>
int strong(int n)
{
	int fact=1,temp=0,rem,q,m;
	m=n;
	while(n!=0)
	{
	rem=n%10;
	for(int i=1;i<=rem;i++)
	{
		fact=fact*i;
	}
    n=n/10;
    temp=fact+temp;
    fact=1;
}
if(temp==m)
printf("%d is a strong number.",m);
else
printf("%d is not a strong number.",m);
return temp;
}
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	strong(num);
	return 0;
}
