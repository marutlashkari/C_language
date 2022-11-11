 #include<stdio.h>
void main()
{
	int h,m,s,sn;
	
	printf("enter s=");
	scanf("%d",&s);
	
	h=s/3600;
	m=(s-3600)/60;
	sn=(s-3600)%60;
	
	printf("h=%d:%d:%d\n",h,m,sn);
    

}
