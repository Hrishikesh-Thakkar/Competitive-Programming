#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	vector<int> p,m,pe;
	for(int i=0;i<n;i++)
		if(a[i]==1)
			p.push_back(i+1);
		else if(a[i]==2)
			m.push_back(i+1);
		else
			pe.push_back(i+1);

	int ans=min(p.size(),min(pe.size(),m.size()));
	cout<<ans<<endl;

	for(int i=0;i<ans;i++)
		cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<endl;
	return 0;
}