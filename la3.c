#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter the number a:");
	scanf("%d",&a);
	printf("enter the number b:");
	scanf("%d",&b);
	printf("enter the number c:");
	scanf("%d",&c);
	(a>b)?((a>c)?printf("a is largest number"):printf("c is largest number")):
	((b>c)?printf("b is largest number"):printf("c is largest number"));
}