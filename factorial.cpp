/*
	Name:MANSI AGARWAL
	Roll No.:DTU/2K16/B1/179
	Date: 18.10.16 11:30
	Description:FACTORIAL
*/
#include<stdio.h>
int fact(int);
int main()
{
	int x;
	printf("enter the no.");
	scanf("%d", &x);
	int f;
	f=fact(x);
	printf("%d",f);
	return 0;
}
int fact(int y)
{  int d;
	while(y>0)
	{
		if(y==1)
		return(1);
		else
		{
			d=y*fact(y-1);
		}
		y--;
		return(d);
	}
	
	
}

