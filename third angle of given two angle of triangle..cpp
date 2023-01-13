#include<stdio.h>
#include<math.h>
int main()
{
	float c,a,b;
	printf("enter two angles:");
	scanf("%f%f",&a,&b);
	c=180-(a+b);
	printf("third angle of that triangle whose  two sides are given:%f",c);
	return 0;
}

