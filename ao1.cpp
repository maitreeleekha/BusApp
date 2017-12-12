
#include<iostream>
using namespace std;
int main()
{
	int a[10][10];
	int n;
	int i;
	int j;
	cout<<"enter row and col no.";
	cin>>n;
	for(i=0; i<n ; i++)
	{
		for(j=0; j<n ; j++)
		{
			cin>>a[i][j];
			cout<<a[i][j];
		}
		cout<<"\n";
	}
			
	
}
