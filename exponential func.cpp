#include<stdio.h>
void sum(int n) ;
int main()
{int n;
printf("enter no of terms");
scanf("%d", &n);
sum(n);
return 0;
}
void sum (int n)
{   float x; 
    float sum=1.00;
	printf("enter the value of x");
	scanf("%f", &x);
	for(int i=1; i<=n; i++)
	{float fact=1.00, temp=1.00;
	for(int j=1; j<=i; j++)
	{
	fact=fact*j;
	temp=temp*x;
	
	 }
		sum=sum+(temp/fact);
	}
printf("%f", sum);
	
}
