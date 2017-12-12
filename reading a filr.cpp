/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 16.10.16 11:30
	Description:READING A FILE
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

FILE *fp;

char s[100];
fp=fopen("file.txt","r");
if(fp==NULL)
	{
		puts("cannot open the file");
		fclose(fp);
	}
while(fgets(s,99,fp)!=NULL)
{
puts(s);
}

fclose(fp);

return 0;

}
