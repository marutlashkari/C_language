#include<stdio.h>
void main()
{
	int bs,gs,hra,da;
	printf("enter bs");
	scanf("%d",&bs);
	if(bs>=10000 && bs<20000)
	{
		hra=(20*bs)/100;
		da=(80*bs)/100;
	}
	else if(bs>=20000 && bs<30000)
	{
		hra=(25*bs)/100;
		da=(90*bs)/100;
	}
	else if(bs>=30000)
	{
		hra=(30*bs)/100;
		da=(95*bs)/100;
	}
	else 
	{
	printf("input sallry lase than 10000");
	}
	gs=bs+da+hra;
	printf("gs=%d",gs);
	
}