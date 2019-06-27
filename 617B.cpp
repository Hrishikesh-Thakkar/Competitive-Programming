#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	int flag_one=0;
	for(int i=0;i<n;i++)
		if(a[i]==1)
			flag_one=1;
	if(flag_one==0)
	{
		cout<<0<<endl;
		return 0;
	}
	vector<int> vec;
	for(int i=0;i<n;i++)
		if(a[i]==1)
			vec.push_back(i+1);
	long long ans=1;
	for(int i=1;i<vec.size();i++)
		ans*=(vec[i]-vec[i-1]);
	cout<<ans<<endl;
	return 0;
}