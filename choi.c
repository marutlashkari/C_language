#include<stdio.h>
void main()
{
	int a,b,ch,ans;

	printf("a");
	scanf("%d",&a);

	printf("b");
	scanf("%d",&b);

	printf("1 for add\n");
	printf("2 for sub\n");
	printf("3 for mul\n");
	printf("4 for div\n");

	scanf("%d",&ch);
	if(ch==1)
	{
		ans=a+b;
		printf("add=%d",ans);
	}
	if(ch==2)
	{
		ans=a-b;
		printf("sub=%d",ans);
	}
	if(ch==3)
	{
		ans=a*b;
		printf("mul=%d",ans);
	}
	if(ch==4)
	{
		ans=a/b;
		printf("div=%d",ans);
	}

}