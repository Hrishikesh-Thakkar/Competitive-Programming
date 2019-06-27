#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	unordered_map<int,int> m;
	vector<int> v;
	int a=0,b=1;
	m[a]=1;
	m[b]=1;
	v.push_back(0);
	v.push_back(1);
	int lim=1e9;
	while(a+b<=lim)
	{
		int c=a+b;
		if(m[c]==0)
			v.push_back(c);
		m[c]=1;
		a=b;
		b=c;
	}
	for(int i=0;i<v.size();i++)
		for(int j=0;j<v.size();j++)
		{
			int diff=n-v[i]-v[j];
			if(m[diff]==1)
				{cout<<v[i]<<" "<<v[j]<<" "<<diff; return 0;}
		}
	cout<<"I'm too stupid to solve this problem";
	return 0;
}