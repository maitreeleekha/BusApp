/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 28.10.16 1:30
	Description:STRUCTURE
*/
#include<stdio.h>
int main()
 {
 	struct book
 {
	char name[100];
	float price;
	int pages;
};


struct book b[1000];
int n,i;
printf("enter the no. of records");
scanf("%d",&n);
for(i=0; i<n; i++)
	 {
	
		printf("enter name, price and no. of pages\n");
		scanf("%s%f%d", b[i].name, &b[i].price, &b[i].pages);
		printf("%s %f %d\n", b[i].name, b[i].price, b[i].pages);
	}
	
	return 0;
}
