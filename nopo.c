#include<stdio.h>
void main()
{
	int num[10],i,posi=0,nage=0;

	for(i=0;i<10;i++)
	{
		printf("enter array element:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(num[i]>=0)
		{
		posi=posi+1;
		}
		else
		{
		nage=nage+1;
		}
	}
	printf("posi=%d,nage=%d",posi,nage);
}