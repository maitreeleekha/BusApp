/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 20.10.16 1:30
	Description:FIBONACCI SERIES
*/
#include<stdio.h>
void Sum(int n);
int main()
{
	int n;
	printf("enter no of terms");
	scanf("%d",&n);
	Sum(n);
}
void Sum(int n)
{ int c;
	int a=1, b=2;
	printf("%d%d", a , b);
	for(int i=1; i<=n-2 ; i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		
	}
}

