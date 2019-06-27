#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m,k;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> v;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		v.push_back(a[i+1]-a[i]-1);
	}
	long long int ans=n;
	
	
	sort(v.begin(),v.end());
	for(int i=0;i<n-k;i++)
		ans+=v[i];
	cout<<ans<<endl;
	return 0;
}