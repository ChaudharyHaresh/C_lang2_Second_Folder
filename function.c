#include<stdio.h>
void mypattern (int n)
{
	int i,j,sp=15;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("<>");
		}
		sp--;
		printf("\n");
	}
}
	int main()
{
	mypattern(3);
	mypattern(6);
	return 0;
}