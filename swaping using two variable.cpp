#include<stdio.h>
int main()
{
    int a,b;
    printf("befor swaping a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    
    
    int c;
    c=a+b;
    b=c-b;
    a=c-b;
    printf("after swaping a=%d\nb=%d",a,b);
    return 0;
    
    
}
