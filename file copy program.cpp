/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 17.10.16 11:30
	Description:COPYING A FILE
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	FILE *fp1;
	fp=fopen("file.txt","r");
	fp1=fopen("file1.txt","w");
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
	
	char c;
    c= fgetc(fp);
	while(1)
	{  if(c==EOF)
	{
		break;
	}   
	else
	{
	fputc(c,fp1);
    }
	}
	fclose(fp);
	fclose(fp1);
}
