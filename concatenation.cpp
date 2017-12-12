/*
	Name: MANSI AGARWAL
	Roll No.: DTU/2K16/B1/179 
	Date: 06.10.16 11:46
	Description: CONCATENATION
*/
#include<stdio.h>
int main()
{
char s1[1000],s2[1000],i,j;
printf("enter the two strings that are to be concated")	;
scanf("%s%s", s1, s2);
for(i=0; s1[i]!='\0'; i++);
for(j=0; s2[j]!='\0'; j++, ++i)
{
	s1[i]=s2[j];
}
s1[i]='\0';
printf("after concatenation we get: %s " , s1);
}
