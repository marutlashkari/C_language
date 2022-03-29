 #include<stdio.h>
void main()
{
	int d,y,w,m;
	printf("enter d=");
	scanf("%d",&d);
	y=d/365;
	w=(d%365)/7;
	m=(d%365)%7;

	
	printf("y=%d:%d:%d\n",y,w,m);
    

}