#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2,p,q,f;
	printf("enter a\n");
	scanf("%d"&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf("enter c\n");
	scanf("%d",&b);

	d=((b*b)-(4*a*c));

	if(d>0){
		
		r1=((-b)+sqrt(d)/(2*a));
		r2=((-b)+sqrt(d)/(2*a));
		printf("r1=%d"r1);
		printf("r2=%d"r2);
		
	}
	else if (d==0){
		
		f=(-b)/(2*a);
		printf("f=%d"f);
		
	}
	else if (d<0){
		
		p=((-b)/2*a)+i sqrt((d)/(2*a));
		q=((-b)/2*a)-i sqrt((d)/(2*a));
		printf("p=%d"p);
		printf("q=%d"q);
		
	}
}
