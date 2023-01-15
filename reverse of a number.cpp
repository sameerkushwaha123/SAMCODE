#include<stdio.h>
int main()
{
    int n,reverse;
    printf(" enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        reverse =n%10;
        printf("%d",reverse);
        n=n/10;
    }
    return 0;
}

