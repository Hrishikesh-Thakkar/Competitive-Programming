#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){

	int n,m;
	cin>>n>>m;
	if(!isprime(m)){
		cout<<"NO"<<endl;
		return 0;
		
	}
	for(int i=n+1;i<m;i++)
	{
		if(isprime(i))
			{cout<<"NO"<<endl; return 0;}
	}
	cout<<"YES"<<endl;
	return 0;
}