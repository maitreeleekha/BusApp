/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 28.10.16 11:30
	Description:DATE
*/
#include<stdio.h>
int main()
 {
 	struct date 
 {
	int dt;
    int mnths;
	int yrs;
};
      

struct date d[1000];
int n,i;
printf("enter the no. of records");
scanf("%d",&n);
for(i=0; i<n; i++)
	 {
	
		printf("enter date, months and years");
		scanf("%d%d%d", &d[i].dt, &d[i].mnths, &d[i].yrs);
		printf("%d / %d / %d\n" , d[i].dt , d[i].mnths , d[i].yrs);
	}
	
	return 0;
}
