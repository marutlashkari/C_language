#include<stdio.h>
void main()
{
	int num[10],i,min=0,max=0,avg=0;

	for(i=0;i<10;i++){
		
		printf("enter array element:");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++){
		if(num[0]>=num[i]){	
 			printf("%d",max);
		}
		else{
			printf("%d",min);
		}
	}
	printf("max=%d,min=%d",max,min);

}
