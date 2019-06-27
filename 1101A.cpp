#include<bits/stdc++.h>
using namespace std;

int main(){

	int q;
	cin>>q;

	while(q--){
		long int l,r,d;
		//to find int x such that x%d=0 and x is 
		cin>>l>>r>>d;
		if(d<l)
			{cout<<d<<endl;}
		else
		{
			long int ans=r/d;
			ans++;
			cout<<d*ans<<endl;
		}
	}
	return 0;
}