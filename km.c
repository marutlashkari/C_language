#include<stdio.h>
void main()
{
	float km,meter,cm,feet,inch;

	printf(" Enter kilometer=");
	scanf("%f",&km);

	meter=km*1000;
	cm=km*100000;
	feet=km*3280.84;
	inch=km*39370.1;

	printf("km to meter=%f\n",meter);
	printf("km to cm=%f\n",cm);
	printf("km to feet=%f\n",feet);
	printf("km to inch=%f\n",inch);
}