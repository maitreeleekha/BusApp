/*
	Name: MAITREE LEEKHA
	Roll no.:DTU/2K16/B1/172
	Date: 04.08.16 12:11
	Description: PROGRAM TO REVERSE THE INTEGER
*/

#include<stdio.h>
#include<conio.h>
int main() {
	int a, revno=0;
	printf("Enter a number to reverse");
	scanf("%d", a);
	while(a>0) {
		revno=revno*10+a%10;
		a=a/10;

	}
	printf("Reverse of entered number is=%d", revno);

	return(0);
}
