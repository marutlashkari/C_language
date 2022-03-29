#include<stdio.h>
void main()
{
	int num[10],i,odd=0,even=0;

	for(i=0;i<10;i++)
	{
		printf("enter array element:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(num[i]%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
	
		printf("even=%d,odd=%d",even,odd);
}