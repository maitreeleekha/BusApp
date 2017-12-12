#include<stdio.h>
#include<conio.h>
int main()
{int i , j, k=4,p=0;
for(i=1; i<=7;i+=p)
{
	for(j=1;j<=k;j++)
	{
		printf(" ");
	}
	k=k-1;
	for(int n=i; n<=i+p; n++)
	{
		
		printf("%d%c",n," ");
	}
	
	
	printf("\n");
	p=p+1;
}


}

