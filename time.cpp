/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 28.10.16 1:30
	Description:TIME
*/
#include<stdio.h>
int main()
 {
 	struct time 
 {
	int hrs;
int mins;
	int sec;
};
      

struct time t[1000];
int n,i;
printf("enter the no. of records");
scanf("%d",&n);
for(i=0; i<n; i++)
	 {
	
		printf("enter hrs, mins and sec");
		scanf("%d%d%d", &t[i].hrs, &t[i].mins, &t[i].sec);
		printf("%d : %d : %d\n" , t[i].hrs , t[i].mins , t[i].sec);
	}
	
	return 0;
}
