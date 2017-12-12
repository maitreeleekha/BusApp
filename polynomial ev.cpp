/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179 
	Date: 17.09.16 11:59
	Description: POLYNOMIAL EVALUATION
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,i,e=0,a[10],m;
	printf("enter x");
	scanf("%d",&x);
	printf("enter the degree of the polynomial");
	scanf("%d",&n);
	m=n+1;
	printf("enter the coefficients");
	for(int b=0; b<m; b++)
	{
		scanf("%d", &a[b]);
	}
	for(i=0; i<=n ; i++)
	{   
		e=e+(a[i])*pow(x,i);	
	}
	printf("%d", e);
}
