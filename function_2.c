#include<stdio.h>
void dosum (int x,int y)
{
	printf("\n sum :%d",x+y);
}
int main()
{
int a,b;
	printf("enter two values :");
	scanf("%d%d",&a,&b);
	dosum(a,b);
	return 0;
}