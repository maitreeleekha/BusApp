/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 16.10.16 11:30
	Description:NO. OF WORDS, CHARACTERS AND LINES
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	int nol, noc, now;
	fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		puts("cannot open the file");
		fclose(fp);
	}
	
	while(1)
	{
	c=fgetc(fp);
	if(c==EOF)
		break;

    
	noc++;
	if((c=='\t') || (c=='\n'))
	now++;
	if(c=='\n')
	nol++;
	   
   }
   fclose(fp);
   printf("%d\n%d\n%d", now, noc,nol);
   return 0;
}
