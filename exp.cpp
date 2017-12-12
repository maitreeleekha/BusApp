#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1, m=1, sum=1,x;
	printf("enter a no.");
	scanf("%d",&x);
	for	(int i=1 ; i<=10 ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{
			fact=fact*j;
		}
		for(int n=1 ; n<=i ; n++)
		{
			m=m*x;
		}
		sum=sum+(m/fact);
		
	}
	printf("%d", sum);
}
