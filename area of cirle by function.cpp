#include<stdio.h>
float r;
float pi=3.14;
float area(float);
float crcmf(float);
float diameter(float);
int main()
{
    float A,C,D;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    A=area(r);
    printf("A=%f\n",A);
    C=crcmf(r);
    printf("C=%f\n",C);
    D=diameter(r);
    printf("D=%F",D);
    return 0;
}
float area(float A)
{
    A=pi*r*r;
    return A;
}
float crcmf(float C)
{
   C=2*pi*r;
   return C;
    
}
float diameter(float D)
{
    D=2*r;
    return D;
}

