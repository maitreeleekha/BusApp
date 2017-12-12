
/*
    Name: MAITREE LEEKHA
	Roll no.:DTU/2K16/B1/172
	Date: 04.08.16 12:30
	Description: TO CHECK IF THE ENTERED NO. IS PRIME OR COMPOSITE
*/
#include<stdio.h>
#include<conio.h>
int main() {
	int n, prime=0;
	printf("enter n");
	scanf("%d", &n);
	for(int i=2 ; i<=(n/2) ; i++) {
		if(n%i==0)
			prime++;
	}
	if(prime==0)
		printf("the no. is prime");
	else
		printf("no. is composite");
	return 0;
}
