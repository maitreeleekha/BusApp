#include<stdio.h>
#include<conio.h>
int main()
{int k=6;
	for(int i=1; i<=4 ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{printf("%d",j);}
		for(; k>0; k--)
		{
			printf(" ");
		}
		
			for(int n=1 ; n<=i ; n++)
		{
		printf("%d", n);
		
		}
		for(int m=i-1 ; m>=1 ; m--)
		{printf("%d", m);
		
		}
		
		printf("\n");
		k=6-2*i;
		}
		
	
}
