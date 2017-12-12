/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179 
	Date: 06.10.16 18:46
	Description: REVERSAL OF STRING
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char s1[1000],s2[1000];
	int i;
	printf("enter a string: ");	
	for(i=0; s1[i]!='\0' ; i++)
	{
	scanf("%c", &s1[i]); 
    }
    	printf("reverse string is: ");	
	for(int k=0;i>=0;k++,i--)
	{
		s2[k]=s1[i];
		printf("%c",s2[k]);
	}
}
