#include<bits/stdc++.h>
using namespace std;

int main(){

	long long int n;
	cin>>n;
	int count=0;
		while(n>=100)
			{n-=100;count++;}
		while(n>=20)
			{n-=20;count++;}
		while(n>=10)
			{n-=10;count++;}
		while(n>=5)
			{n-=5;count++;}
	cout<<count+n;

	return 0;
}