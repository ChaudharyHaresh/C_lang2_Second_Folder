#include<stdio.h>
void dopattern(int a,int b)
{
	printf("%d",a);
}
int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",i);
		}
			printf("\n");
	}
	dopattern(i,j);
	return 0;
}