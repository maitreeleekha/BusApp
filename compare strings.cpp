/*
	Name: MAITREE LEEKHA
	Roll No.: DTU/2K16/B1/172 
	Date: 06.10.16 17:46
	Description: COMPARISON OF STRINGS
*/

#include<stdio.h>
int main()
{
	char str1[1000], str2[1000]; 
	int i,j;
	printf("enter the first string: ");
    scanf("%s", str1);
	printf("enter the second string: ");
	scanf("%s", str2);
	int k=0,m,n;
	for(m=0, n=0; str1[m]!='\0' || str2[n]!='\0'; m++,n++ )
	{
		
		k=k+(str1[m]-str2[n]);
	}
	printf("%d",k);
	if(k==0)
	{
		printf("\n the strings are equal");
	}
	else
	{
		printf("\n the strings are not equal");
	}
}
