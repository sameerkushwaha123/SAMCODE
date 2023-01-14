#include<stdio.h>
#include<math.h>
int main()
{
	float num,b,c;
	printf("enter the number of days:");
	scanf("%f",&num);
	b=num/365;
	c=num/7;
	printf("number of years:%f\n",b);
	printf("number of weeks:%f",c);
	return 0;
}
