/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 27.10.16 12:30
	Description:COMPLEX NO.
*/
#include<stdio.h>
int main()
 {
 	struct complex 
 {
	float real;
    float comp;
};
      

struct complex c[1000];
int n,i;
printf("enter the no. of records");
scanf("%d",&n);
for(i=0; i<n; i++)
	 {
	
		printf("enter real part and complex part");
		scanf("%f%f", &c[i].real, &c[i].comp);
		printf(" %f + i%f \n" , c[i].real, c[i].comp);
	}
	
	return 0;
}
