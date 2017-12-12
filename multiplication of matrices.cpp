/*
	Name:MANSI AGARWAL
	Roll No.:DTU/2K16/B1/179 
	Date: 1.09.16 11:30
	Description:MULTIPLICATION OF TWO MATRICES
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10][10], B[10][10],C[10][10],r,r1,c,c1;
	printf("enter the no of rows and columns for first and sec matrices");
	scanf("%d%d%d%d",&r,&c,&r1,&c1);
	if(!c==r1)
	{
		printf("multiplication not possible");
	}
	else{
	
	int a=0;
	int k;
	printf("enter the first matrix\n");
	for(int i=0 ; i<r ; i++)
	  {
	  	for(int j=0 ; j<c ; j++)
	  	{
	  		scanf("%d", &A[i][j]);
	  		printf("%d", A[i][j]);
		}
		printf("\n");
		
	  }
	  printf("enter the second matrix\n");
	  for(int i=0 ; i<r1 ; i++)
	  {
	  	for(int j=0 ; j<c1 ; j++)
	  	{
	  		scanf("%d", &B[i][j]);
	  		printf("%d", B[i][j]);
		}
		printf("\n");
}
printf("the resultant matrix is:\n");
int j;
for(int i=0 ; i<r ; i++)
	  {
	  	for(j=0 ; j<c1 ; j++)
	  	{
	  	  C[i][j ]=0;
	  	  for(int k=0; k<2 ; k++)
	  	  {
			
	  	   C[i][j]+=(A[i][k] * B[k][j]);
	  }
	  	   	printf("%d", C[i][j]);
	  	
		}
	  
		printf("\n");
	}}return 0;}

