#include<stdio.h>
void main()
{
	float c,f;
	printf("\n celsius to fahrenheit \n\n");
	printf("enter value for c=");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("\n f=%f",f);
	printf("\n______\n");
	printf("\n fahrenheit to celsius\n\n");
	printf("enter value for f=");
	scanf("%f",&f);
	c=(c-32)/1.8;
	printf("\n c=%f",c);
}