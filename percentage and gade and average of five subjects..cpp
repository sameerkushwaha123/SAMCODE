#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,sum; 
	printf("marks get by student in first suject:");
	scanf("%f",&a);
	printf("marks get by student in second subject:");
	scanf("%f",&b);
	printf("marks get by student in third subject:");
	scanf("%f",&c);
	printf("marks get by student in fourth subject:");
	scanf("%f",&d);
	printf("marks get by student in fifth subject:");
	scanf("%f",&e);
	sum=(a+b+c+d+e);
	printf("sum of all marks:%f",(a+b+c+d+e));
	f=(a+b+c+d+e)/5;
	printf("average of numbers:%f\n",f);
	g=(sum/150)*100;
	printf("percentage of that number:%f\n",g);
	if(g>=90)
	{
		printf("A grade");
	}
    else if(g<=89)
	{
		printf("B grade");
	}	
	else
	printf("C grade");
	return 0;
}
