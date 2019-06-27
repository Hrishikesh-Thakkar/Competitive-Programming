#include<bits/stdc++.h>
using namespace std;

int main()
{
int q;
cin>>q;
while(q--){

	long long int n,a,b;
	cin>>n>>a>>b;

	if(2*a<=b)
	{
		cout<<n*a<<endl;
	}
	else
	{
		if(n%2==0)
			cout<<(n*b)/2<<endl;
		else
			cout<<a+((n-1)*b)/2<<endl; 		
	}
}
return 0;
}