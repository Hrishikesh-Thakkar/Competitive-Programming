#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	vector<string> vec;
	for(int i=0;i<5;i++)
	{
		string s1;
		cin>>s1;
		vec.push_back(s1);
	}
	for(int i=0;i<5;i++)
	{
		if(s[0]==vec[i][0])
			{cout<<"YES"; return 0;}
		else if(s[1]==vec[i][1])
			{cout<<"YES"; return 0;}

	}
cout<<"NO";

	return 0;
}