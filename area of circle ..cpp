#include<stdio.h>
#include<math.h>
int main()
{
    float r1,r2,r3,d;
    float pai =3.14;

    printf("radius of circule r(cm) =");
    scanf("%f",&r1);
    printf("radius of circule r(m) =");
    scanf("%f",&r2);
    printf("radius of circule r(km) =");
    scanf("%f",&r3);
    d=r1+r2+r3;
    printf("area of circle is %f(cm)\n",pai*d*d);
    printf("area of circle is %f(km)\n",pow(10,-5)*pai*d*d);
    printf("area of circle is %f(m)\n",pow(10,-2)*pai*d*d);
    printf("area of circle is %f(mm)\n",10*pai*d*d);
    printf("area of circle is %f(micro meter)\n",pow(10,-8)*pai*d*d);
    return 0;
    
  
}

