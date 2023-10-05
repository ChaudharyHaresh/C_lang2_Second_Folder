// no argument no return
#include<stdio.h>
int dosum()
{
	int a,b;
	printf("enter two values :");
	scanf("%d%d",&a,&b);

	return a+b;
}
int main ()
{
	int sum;
	sum=dosum();
	printf("\n sum : %d",sum);
	return 0;
}
		