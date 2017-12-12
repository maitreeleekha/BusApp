/*
	Name:MANSI AGARWAL
	Roll No.:DTU/2K16/B1/179
	Date: 16.10.16 11:30
	Description:WRITING IN A FILE
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char s[100];
	fp=fopen("file.txt","w");
	if(fp==NULL)
	{
		puts("cannot open the file");
		fclose(fp);
	}
	printf("enter a few lines");
	while(strlen(gets(s))>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	return 0;
}
