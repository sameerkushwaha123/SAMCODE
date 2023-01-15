#include<stdio.h>
    float main()
{
    float pai=3.14;
    float h;
    printf("hight of cone h=");
    scanf("%f",&h);
    float l;
    printf("surface length of cone l=");
    scanf("%f",&l);
    float r;
    printf(" surface radius of cone r=");
    scanf("%f",&r);
    float A;
    A=(pai*r*r)+pai*r*sqrt(h*h+r*r);
    printf("area of cone A=%f",A);
    return 0;
}


