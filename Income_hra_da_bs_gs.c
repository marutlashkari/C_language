#include<stdio.h>
void main()
{
	int bs,gs,hra,da;
	printf("enter bs");
	scanf("%d",&bs);
	if(bs>=10000){
		
		hra=20/100*bs;
		da=80/100*bs;
		
	}
	
	if(bs>=20000){
		
		hra=25/100*bs;
		da=90/100*bs;
		
	}
	
	if(bs>=30000){
		
		hra=30/100*bs;
		da=95/100*bs;
		
	}
	
	gs=bs+hra+da;
	printf("gs=%d",gs);
}
