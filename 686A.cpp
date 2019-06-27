#include<bits/stdc++.h>
using namespace std;

int main(){

	long long int n,x;
	cin>>n>>x;

	int a=0,d=0;
	while(n--){
		char c;
		cin>>c;

		long long int amt;
		cin>>amt;

		if(c=='-'){
			if(x-amt>=0)
				x-=amt;
			else
				d++;
		}
		else
			x+=amt;
	}
	cout<<x<<" "<<d;
	return 0;
}