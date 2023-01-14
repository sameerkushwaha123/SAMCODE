#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the base:");
	scanf("%f",&a);
	printf("enter the power of the base:");
	scanf("%f",&b);
	c=pow(a,b);
	printf("power of given number:%f\n",c);
	printf("square root of the given base:%f",sqrt(a));
	return 0;
}
