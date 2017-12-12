/*Name: MANSI AGARWAL
	Roll no.:DTU/2K16/B1/179 
	Date: 11.08.16 11:36
	Description: TO CALCULATE EXPONENT OF THE NO. ENTERED*/
#include<stdio.h>
#include<math.h>
int main() {
	int a,c;
	int n=1;
	printf("enter a number whose power you need to find" );
	scanf("%d", &a);
	printf("enter the power");
	scanf("%d", &c);
for(int i=1; i<=c ; i++)
{
	
	n=n*a;
}
	printf("the desired number is = %d",n);
}
