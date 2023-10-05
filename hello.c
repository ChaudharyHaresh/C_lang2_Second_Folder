#include<stdio.h>
int a,b,c,t,per;
char d;
void dosum2()
{
	printf("\t \n total=%d",t);
	printf("\t \n per  =%d",per);
	printf("\t \n grade=%c",d);	
}
void dosum1()
{
	t=a+b+c;
	per=t/3;
	if(a<33||b<33||c<33)
	d='F';
	else if(per>80 && per>90)
	d='B';
	else if(per>90)
	d='A';
	dosum2();
}
void dosum()
{	
	printf("maths=");
	scanf("%d",&a);
	printf("chemistry=");
	scanf("%d",&b);
	printf("physics=");
	scanf("%d",&c);
	dosum1();
}
int main()
{
	dosum();
	return 0;
}