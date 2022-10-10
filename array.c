#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],total,i;
	float per;
	for(i=0;i<5;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("c[%d]",i);
		scanf("%d",&c[i]);
	}
	
		printf("\n matha\t\tchemistry\t\tphysics\ttotal\tper");
		for(i=0;i<5;i++)
	{
		total=a[i]+b[i]+c[i];
		per=total/3;
		printf("\n %d\t\t%d\t\t%d\t\t%d\t%.2f\t",a[i],b[i],c[i],total,per);
	
		if(a[i]<33 || b[i]<33 || c[i]<33 )
		printf("\t fail");
		else if(per>75)
		printf("\t A");
		else if(per>60 && per<75)
		printf("\t b");
		else if(per>45 && per<60)
		printf("\t c");
		else if(per>35 && per<45)
		printf("\t d");
	}
	return 0;
}