#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter a,b,c\n",a,b,c);
	scanf("%d%d%d\n",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest number");
		}
			else
		{
			printf("c is largest number");
		}
	}

	else
	{
		if(b>c)
		{
			printf("b is largest number");
		}
		else
		{
			printf("c is largest number");
		}

	}
}	
