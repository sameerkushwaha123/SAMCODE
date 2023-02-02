#include<stdio.h>
int main()
{
	int m,n;
	printf("enter number of rows:");
	scanf("%d",&m);
	printf("enter number of colmans:");
	scanf("%d",&n);
	int a[m][n];
	printf("enter %d numbers:",m*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("your 2D ARRAY.\n");
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
