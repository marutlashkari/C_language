#include<stdio.h>
void main()
{
	int a[10],i;

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=9;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
