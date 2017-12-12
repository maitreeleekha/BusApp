#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1;
	float t;
	float sum=0;
	for(int i=1; i<=7; i++)
	{
		for(int j=1; j<=i; j++)
	{
	fact=fact*j;
		
	}
	printf("%d\n", fact);
	fact=1;
	
	
}
return 0;
}

