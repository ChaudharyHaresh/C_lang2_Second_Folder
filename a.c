#include<stdio.h>
void main()
{
	int a[5]={23,43,54,56,44};
	int *p = NULL;
	int i;
	p=&a;
	printf("array elements__\n");
	printf("\n value\taddress\n");
	printf("_________\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%u",*(p+i),(p+i));
	}
}
//..