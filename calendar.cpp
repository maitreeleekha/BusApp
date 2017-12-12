/*
	Name:MAITREE LEEKHA
	Roll No.:DTU/2K16/B1/172
	Date: 28.10.16 1:30
	Description:CALANDER
*/
# include <stdio.h> 
# include <conio.h> 
#include<string.h>
int main() 
{ 
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
 char week[7][10] ;
 int date, mon, year, i, r, s = 0 ;  
 strcpy(week[0], "Sunday") ; 
 strcpy(week[1], "Monday") ; 
 strcpy(week[2], "Tuesday") ; 
 strcpy(week[3], "Wednesday") ; 
 strcpy(week[4], "Thursday") ; 
 strcpy(week[5], "Friday") ; 
 strcpy(week[6], "Saturday") ; 
 printf("Enter a valid date (dd/mm/yyyy) : ") ; 
 scanf("%d / %d / %d", &date, &mon, &year) ; 
 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) 
 month[1] = 29 ; 

 for(i = 0 ; i < mon - 1 ; i++) 
 
 s = s + month[i] ; 
 s = s + (date + year + (year / 4) - 2) ; 
 s = s % 7 ; 
 printf("\nThe day is : %s\n", week[s]) ; 

	 switch (mon)
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
 getch() ; 
}
}

