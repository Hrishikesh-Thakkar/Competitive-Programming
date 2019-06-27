#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main(){

	long long int n;
	cin>>n;

	ll ans=1;
	if(n%2==0)
		ans*=2;
	while(n%2==0)
	{
		n/=2;
	}
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0){
			ans*=i;
		while(n%i==0)
			n/=i;
		}
	}
	if(n>2)
		ans*=n;

	cout<<ans;

	return 0;
}