#include<stdio.h>
int main()
{
    int n,i,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        rem=n%i;
        if(rem==0)
        sum +=i;
    }
    if(n==sum)
    printf("%d is a perfect number\n",n);
    else
    printf("%d is a not a perfect number\n",n);
    }


