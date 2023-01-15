#include<stdio.h>
int multiply (int a,int b)
{
    int m;
    m=a*b;
    return m;
}
int main()
{
    int c,d;
    printf("enter the first argument:");
    scanf("%d",&c);
    printf("enter the second argument:");
    scanf("%d",&d);
    printf("the multiplication of %d and %d is equal to %d",c,d,multiply(c,d));
    return 0;
    
}


