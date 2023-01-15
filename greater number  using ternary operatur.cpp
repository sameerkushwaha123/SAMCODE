#include<stdio.h>
int main()
{
	int a[3],i,n;
	printf("enter the elements:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	n=(a[0]>a[1]?(a[1]>a[2]?printf("%d is greater number",a[0]):(a[2]>a[0]?printf("%d is grerater number",a[2])):printf("%d is greater number",a[1]));
	return 0;
	
}
