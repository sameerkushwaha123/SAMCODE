#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the last number until you want to do sum:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
			
	}
