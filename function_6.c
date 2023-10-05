//wawr
#include<stdio.h>
int dosum(int a,int b)
{
	return a+b;
}
int main ()
{
	int a,b,sum;
	printf("enter two values :");
	scanf("%d%d",&a,&b);
	sum =dosum(a,b);
	printf("\n sum : %d",sum);
	return 0;
}
	