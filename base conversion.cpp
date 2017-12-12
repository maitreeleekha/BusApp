/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179  
	Date: 01.10.16 16:47
	Description: BASE CONVERSION (DECIMAL TO BINARY)
*/

#include<stdio.h>
int main()
{
	int n;
	int b=0;
	printf("enter a no.");
	scanf("%d",&n);
	int remainder; 
    long binary = 0, i = 1;
     
    while(n != 0) {
        int remainder = n%2;
        n = n/2;
       b= b + (remainder*i);
        i = i*10;}
	printf("%d\n",b);
	
}
