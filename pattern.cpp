/*
	Name:MANSI AGARWAL 
	Roll No.:DTU/2K16/B1/179 
	Date: 11.08.16 11:20
	Description:PATTERN 1 
*/

#include<iostream>
using namespace std;
int main()
 {
	int i,j,n,k=3;
	for(i=1 ; i<=4 ; i++) {
		for(j=1 ; j<=k ; j++) {
		cout<<" ";
		}
		k=k-1;
		for(n=i ; n>1 ; n--) {
			cout<<n;

		}
		for(int m=1 ; m<=i ; m++) {
			cout<<m;
		}
		cout<<"\n";

	}

}
