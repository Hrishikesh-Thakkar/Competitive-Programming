#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	long long mod=998244353;
	int a[n];
	int last_pos[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	map<int,int> m;
	int count=0;
	
	for(int i=n-1;i>=0;i--){
		if(!m.count(a[i]))
			m[a[i]]=i;
		last_pos[i]=m[a[i]];
	}
	int ans=1;
	int cur_max=-1;
	for(int i=0;i<n-1;i++)
	{
		cur_max=max(cur_max,last_pos[i]);
		if(cur_max==i)
			ans=(2*ans)%mod;
	}
	cout<<ans<<endl;
	return 0;
}