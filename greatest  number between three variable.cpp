#include<stdio.h>
int main()
{
	int a[3],i;
	printf("enter the elements:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1]&&a[1]>a[2])
	{
		printf("%d is greater number.",a[0]);
	}
	else if(a[1]>a[2])
	{
		printf("%d ia a greater number.",a[1]);
	}
	else
	printf("%d is a greater number.",a[2]);
	return 0;
}
	 
