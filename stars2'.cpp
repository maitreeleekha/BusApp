/*
	Name:MANSI AGARWAL 
	Roll No.:DTU/2K16/B1/179 
	Date: 11.08.16 11:50
	Description:PATTERN 3
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i , j , k=3;
	for(int i=1 ; i<=7 ; i+=2)
	{
		for(int j=1 ; j<=k ; j++)
		{
			printf(" ");
		}
		k=k-1;
		for(int n=1 ; n<=i ; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
