#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	string a="AB";
	string b="BA";
	int flag_a=0,flag_b=0;
	int i;
	for(i=0;i<s.size()-1;i++)
		if(s[i]=='A' && s[i+1]=='B')
			{flag_a=1;break;}

	for(int j=i+2;j<s.size();j++)
		if(s[j]=='B' && s[j+1]=='A')
			{flag_b=1; break;}

	int res=flag_a+flag_b;
	flag_a=0,flag_b=0;
	for(i=0;i<s.size()-1;i++)
	{
		if(s[i]=='B' && s[i+1]=='A')
			{flag_a=1;break;}
	}
	for(int j=i+2;j<s.size();j++)
		if(s[j]=='A' && s[j+1]=='B')
			{flag_b=1; break;}
	int res1=flag_a+flag_b;
	if(res1==2 || res==2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}