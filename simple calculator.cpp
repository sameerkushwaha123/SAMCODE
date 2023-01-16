#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	printf("enter any char(/*+-):");
	scanf("%c",&ch);
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'*':
		printf("%d",a*b);
			break;
			case'+':
				printf("%d",a+b);
				break;
				case'-':
					printf("%d",a-b);
					break;
					case'/':
						printf("%d",a/b);
						break;
				
	}
	return 0;
}
