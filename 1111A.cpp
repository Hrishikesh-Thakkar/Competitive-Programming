#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		return true;
	return false;
}
int main(){

	string s,t;
	cin>>s>>t;

	if(s.size()==t.size())
	{
		for(int i=0;i<s.size();i++)
		{
			if(isVowel(s[i])==isVowel(t[i]))
				continue;
			else{cout<<"No"<<endl; return 0;}
		}
	}
	else
		{cout<<"No"<<endl;return 0;}
	cout<<"Yes"<<endl;
	return 0;
}