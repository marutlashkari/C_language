#include<stdio.h>
void main()
{
	int a,b,ch,add,sub,mul,div;

	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	scanf("%d",&ch);

	switch(ch){
		case 1:
		add=a+b;
		printf("add=%d",add);
		break;

		case 2:
		sub=a-b;
		printf("sub=%d",sub);
		break;

		case 3:
		mul=a*b;
		printf("mul=%d",mul);
		break;

		case 4:
		div=a/b;
		printf("div=%d",div);
		break;

		default:
		printf("enter the valid number");
	}
}
