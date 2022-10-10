/*#include<stdio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("skill.txt","w+");
	fprintf(fp,"wel come to skill qode the programing lab \n");
	fputs("you are entering to learn c language now__\n",fp);
	
	
}*/


#include<stdio.h>
int main()
{
	FILE *fp;
	char buff[255];
	fp=fopen("skill.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(fp);
	printf("\n\n %s",buff);
}
