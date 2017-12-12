/*
	Name:MANSI AGARWAL
	Roll No.:DTU/2K16/B1/179
	Date: 1.09.16 11:30
	Description:ADDITION OF TWO MATRICES
*/
#include<stdio.h>
#include<conio.h>
int main() {
	int r,c,r1,c1;
	int A[10][10], B[10][10],m,n,C[10][10];
	int a=0;
	printf("enter the no of rows and columns for first and sec matrices");
	scanf("%d%d%d%d", &r,&c,&r1,&c1);
	if((!r==r1) && (!c==c1)) {
		printf("addition not possible");
	}
	for(int i=0 ; i<r ; i++) {
		for(int j=0 ; j<c ; j++) {
			scanf("%d", &A[i][j]);
			printf("%d", A[i][j]);
		}
		printf("\n");

	}
	for(int i=0 ; i<r1 ; i++) {
		for(int j=0 ; j<c1 ; j++) {
			scanf("%d", &B[i][j]);
			printf("%d", B[i][j]);
		}
		printf("\n");
	}
	int j;
	for(int i=0 ; i<r ; i++) 
	{
		for(j=0 ; j<c ; j++)
	   {

			C[i][j]=A[i][j] + B[i][j];
			printf("%d", C[i][j]);
		}
		
	printf("\n");
	}




    }
