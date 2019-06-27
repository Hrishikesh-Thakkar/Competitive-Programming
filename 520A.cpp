#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

string s;
cin>>s;
map<char,int> m;
for(int i=0;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		m[s[i]]=1;
	}
for(int i=97;i<=122;i++)
	if(m[char(i)]==0)
		{cout<<"NO"; return 0;}

cout<<"YES"<<endl;

return 0;
}