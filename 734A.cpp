#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0,d=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='A')
			a++;
		else
			d++;
	if(a==d)
		cout<<"Friendship";
	else if(d>a)
		cout<<"Danik";
	else
		cout<<"Anton";
	return 0;
}