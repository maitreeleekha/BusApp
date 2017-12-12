/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179 
	Date: 06.10.16 18:46
	Description: COMPARISON OF STRINGS
*/
#include<stdio.h>
int main()
{
	char s1[1000], s2[1000], i , j;
	printf("enter the two strings to b ompared: ")
	scanf("%s%s", s1, s2);
	for(i=0; s1[i]!='\0' ; ++i);
	for(i=0; s2[i]!='\0' ; ++j);
	if(i==j)
	{
		printf("the strings are not equal")
		
	}
	else{
		printf("the strings are unequal");
	}

}
