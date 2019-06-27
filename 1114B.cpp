#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	long long int n,m,k;
	cin>>n>>m>>k;

	vector<pair<int,int>> v;
	long long int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		v.push_back(make_pair(a[i],i)); 
	sort(v.begin(),v.end());
	long long int sum=0;

	vector<int> vec;
	for(int i=n-1;i>=(n-m*k);i--)
	{
		
		sum+=v[i].first;
		vec.push_back(v[i].second+1);
	}
	sort(vec.begin(),vec.end());
	cout<<sum<<endl;
	for(int i=1;i<k;i++)
	{
		cout<<vec[i*m-1]<<" ";
	}
	return 0;
}