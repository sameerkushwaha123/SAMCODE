#include<stdio.h>
int main()
{
    int i,n;
    printf("print a number whose table you want to print =");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        
    }
   
}



