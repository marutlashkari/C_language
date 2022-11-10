#include<stdio.h>
void main()
{
	int a,b,ch,ans;
	printf("a");
	scanf("%d",&a);
	printf("b");
	scanf("%d",&b);
	printf("enter 1 for add\n");
	printf("enter 2 for sub\n");
	printf("enter 3 for mul\n");
	printf("enter 4 for div\n");
	scanf("%d",&ch);

		if(ch==1){
			ans=a+b;
			printf("add=%d",ans);
		}
		else if(ch==2){
			ans=a-b;
			printf("sub=%d",ans);
		}
		else if(ch==3){
			ans=a*b;
			printf("mui=%d",ans);
		}
		else if(ch==4){
			ans=a/b;
			printf("div=%d",ans);
		}
		else{
			printf("enter your valid number");
		}

}
