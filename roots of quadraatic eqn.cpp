#include<stdio.h>
#include<math.h>
float main ()
{
    float a,b,c,x,y,z,k;
    printf(" coefficient of x^2,a=");
    scanf("%f",&a);
    printf("coefficient of x,b=");
    scanf("%f",&b);
    printf("constant c=");
    scanf("%f",&c);
    y=-b+sqrt(b*b-4*a*c);
    z=-b-sqrt(b*b-4*a*c);
    x=y/2*a;
    k=z/2*a;
    printf("value of x=%f",x);
    printf("value of x=%f",k);
    return 0;
}

