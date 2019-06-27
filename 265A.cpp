#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	string s1;

	cin>>s>>s1;
	int ans=0,start=0;
	for(int i=0;i<s1.size();i++)
		if(s[start]==s1[i])
			{ans++; start++;}
	cout<<ans+1;
}