#include<stdio.h>
#include<math.h>
int main()
{
	int angle[3],side[3],n,count=0;
	printf("enter 1 for angle and 2 for side:");
	scanf("%d",&n);
	if(n==1)
	{
	printf("enter the angles in degree of a triangle:\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&angle[i]);
	}
	for(int i=0;i<3;i++)
	{
		if(angle[i]==60)
		count++;
    }
    if(count==3)
    printf("given triangle is equilatral");
    else if(count==2)
    printf("given triangle is not isoselouse");
    else if(angle[0]!=angle[1]&&angle[1]!=angle[2])
    printf("given triangle is scalen triangle");
    else if(angle[0]==0||angle[1]==0||angle[2]==0)
    printf("given triangle is represent a point");
    }
    else if(n==2)
    {
	printf("enter the sides of a triangle:\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&side[i]);
	}
	if(side[0]==side[1]&&side[1]==side[2])
    printf("given triangle is equilatral");
    else if(side[0]==side[1]||side[1]==side[2])
    printf("given triangle is isoselouse triangle");
    else if(side[0]!=side[1]&&side[1]!=side[2])
    printf("given triangle is scalen triangle");
    }
    else
    printf("why did you type this, what did i told you only type 1 or 2. ");
	
	return 0;


}
