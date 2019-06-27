#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	long long int k,l;
	cin>>k>>l;
	long long int ans=1;
	//check if log(l) base k is a whole number
	long long int num=(int)(log10(l)/log10(k));
	
	for(int i=0;i<=num;i++)
		{ans=ans*k;
		if(ans==l)
			{cout<<"YES"<<endl<<i;return 0;}
		}
	
	
		cout<<"NO"<<endl;
	return 0;
}