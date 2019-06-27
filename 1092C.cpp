#include<bits/stdc++.h>
using namespace std;


string ans;
vector<string> v;
int n;

int check(const string &pref, const string &suff){

string base=pref+suff.substr(n-2);
multiset<string> tot,P,S;
for(int i=0;i<n-1;i++)
{	
	P.insert(base.substr(0,n-i-1));
	tot.insert(base.substr(0,n-i-1));
	S.insert(base.substr(i+1));
	tot.insert(base.substr(i+1));
}
if(tot==multiset<string>(v.begin(),v.end()))
{
	for(int i=0;i<2*n-2;i++)
		if(P.count(v[i])>=1)
			{ans+='P'; P.erase(P.find(v[i]));}
		else if(S.count(v[i])>=1)
			{ans+='S'; S.erase(S.find(v[i]));}
		return 1;
}
return 0;
}
int main(){
 	ios_base::sync_with_stdio(false);

	
	cin>>n;

	int len=2*n-2;
	vector<string> largest;
	for(int i=0;i<2*n-2;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
		if(v[i].size()==n-1)
			largest.push_back(v[i]);
	}

	if(check(largest[0],largest[1]))
		cout<<ans<<endl;
	else
		{
			check(largest[1],largest[0]);
			cout<<ans<<endl;
		}
	return 0;
}