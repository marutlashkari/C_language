#include<stdio.h>
void main()
{
	int a,b,c,ans;

	printf("number a:");
	scanf("%d",&a);
	printf("number b:");
	scanf("%d",&b);
	printf("number c:");
	scanf("%d",&c);
	(a>b)?(ans=a*c):(ans=b*c);
	printf("ans=%d",ans);
}
