#include<stdio.h>
int main ()
{
	float a,b,c,p;
	
	printf("maths=");
	scanf("%f",&a);
	printf("hindi=");
	scanf("%f",&b);
	printf("eng=");
	scanf("%f",&c);
	printf("total=%f",a+b+c);
	p=(a+b+c)/3;
	printf("\nper=%f",p);
	if(p>75)
	{
		printf("\n a=gred");
	}
	else if(p>60&&p<=75)
	{
		printf("\n b=gread");
	}
	else if(p>45&&p<=60)
	{
		printf("\n c=gread");
	}
	else if(p>35&&p<=45)
	{
		printf("\n d=gread");
	}
	else if(p<35)
	{
		printf(" fail");
	}
	return 0;


}