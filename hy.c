#include<stdio.h>
int main()
{
	int i,j,a=97;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			printf("\n %c",a-32);
			else
			printf("\t %c",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}