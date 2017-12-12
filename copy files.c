#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp, *fp1;
	fp=fopen("file.txt","r");
	fp1=fopen("Untitled11.txt","w");
	if(fp==NULL)
	{
		puts("cannot open the file");
		exit(1);
	}
	if(fp1==NULL)
	{
		puts("cannot open the file");
		exit(2);
	}
	
	char c= fgetc(fp);
	while(ch!=EOF)
	{
		fputs(ch,fp1);
	}
	fclose(fp);
	fclose(fp1);
}
