#include<stdio.h>
int main()
{
		struct date 
 {
	int dt;
    int mnths;
	int yrs;
};
    
struct date d;
    	printf("enter date, months and years");
		scanf("%d%d%d", &d.dt, &d.mnths, &d.yrs);
		printf("%d / %d / %d\n" , d.dt , d.mnths , d.yrs);
	 switch (d.mnths)
	 {
	 	case 1: printf("YOU ARE IN THE MONTH OF JANUARY ");break;
	 	case 2:printf("YOU ARE IN THE MONTH OF FEBRUARY ");break;
		case 3:printf("YOU ARE IN THE MONTH OF MARCH ");break;
		case 4:printf("YOU ARE IN THE MONTH OF APRIL");break;
		case 5:printf("YOU ARE IN THE MONTH OF MAY ");break;
		case 6:printf("YOU ARE IN THE MONTH OF JUNE ");break;
		case 7:printf("YOU ARE IN THE MONTH OF JULY");break;
		case 8:printf("YOU ARE IN THE MONTH OF AUGUST");break;
		case 9:printf("YOU ARE IN THE MONTH OF SEPTEMBER ");break;
		case 10:printf("YOU ARE IN THE MONTH OF OCTOBER ");break;
		case 11:printf("YOU ARE IN THE MONTH OF NOVEMBER ");break;
		case 12:printf("YOU ARE IN THE MONTH OF DECEMBER");break;
		default: printf("uhoh!! ENTER AGAIN");
	 	
	 } 
	 int n;
	 switch(d.mnths)
	 {
	 	case 1: n=31,p=1;break;
	 	case 2:n=28,p=2;break;
		case 3:n=31,p=3;break;
		case 4:n=30,p=4;break;
		case 5:n=31,p=5;break;
		case 6:n=30,p=6;break;
		case 7:n=31,p=7;break;
		case 8:n=31,p=8;break;
		case 9:n=30,p=9;break;
		case 10:n=31,p=10;break;
		case 11:n=30,p=11;break;
		case 12:n=31,p=12;break;
	 }
	 int t;
	 if (d.mnths==1)
	 {
	 	t=(d.dt)%7;
	 	switch(t)
	 	{
	 		case 0: printf("& today is MONDAY");break;
	 	    case 1:printf("& today is TUESDAY ");break;
	 		case 2:	printf("& today is WEDNESDAY");break;
	 		case 3:printf("& today is THURSDAY ");break;
	 		case 4:printf("& today is FRIDAY");break;
	 		case 5:printf("& today is SATURDAY");break;
	 		case 6:printf("& today is SUNDAY");break;
	 			
	 	
		 }
		 int p;
		 if (d.mnths==2)
	 {
	 	p=(d.dt)%7;
	 	switch(p)
	 	{
	 		case 0: printf("& today is MONDAY");break;
	 	    case 1:printf("& today is TUESDAY ");break;
	 		case 2:	printf("& today is WEDNESDAY");break;
	 		case 3:printf("& today is THURSDAY ");break;
	 		case 4:printf("& today is FRIDAY");break;
	 		case 5:printf("& today is SATURDAY");break;
	 		case 6:printf("& today is SUNDAY");break;
	 			
	 	
		 }
		 
	 }	 
	
	
}
