/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179  
	Date: 01.10.16 10:47
	Description: STRING LENGTH
*/
#include<stdio.h>
int main()
{
	char s[1000],i;
	printf("enter a string: ");
	scanf("%s",s );
	for(i=0; s[i]!='\0' ; ++i);
	printf("length of the entered string is %d", i);
	return 0;
}
