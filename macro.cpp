/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 29.10.16 1:30
	Description:MACRO
*/
#include<stdio.h>
 #define Sum(a,b) (a+b)
 
 
 int main()
 {
 	int c,d, sum1;
 	float g,h,sum2;
 	printf("enter two natural numbers");
 	scanf("%d%d", &c, &d);
 	sum1= Sum(c,d);
 	printf("%d\n", sum1);
 	printf("enter two real numbers");
 	scanf("%f%f", &g, &h);
 	sum2= Sum(g,h);
 	printf("%f", sum2);
 	return 0;
 }
