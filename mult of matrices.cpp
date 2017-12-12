/*
	Name:MANSI AGARWAL
	Roll No.:DTU/2K16/B1/179
	Date: 17.09.16 11:30
	Description:MULTIPLICATION OF TWO MATRICES
*/
#include<stdio.h>
#include<conio.h>
int main() {
	int A[10][10], B[10][10],m,n,C[10][10];
	int a=0;
	int k;
	for(int i=0 ; i<2 ; i++) {
		for(int j=0 ; j<2 ; j++) {
			scanf("%d", &A[i][j]);
			printf("%d", A[i][j]);
		}
		printf("\n");

	}
	for(int i=0 ; i<2 ; i++) {
		for(int j=0 ; j<2 ; j++) {
			scanf("%d", &B[i][j]);
			printf("%d", B[i][j]);
		}
		printf("\n");
	}
	int j;
	for(int i=0 ; i<2 ; i++) {
		for(j=0 ; j<2 ; j++) {
			C[i][j ]=0;
			for(int k=0; k<2 ; k++)	   {

				C[i][j]+=(A[i][k] * B[k][j]);
			}
			printf("%d", C[i][j]);

		}

		printf("\n");
	}
	return 0;
}
