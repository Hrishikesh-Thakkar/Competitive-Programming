#include<bits/stdc++.h>
using namespace std;

int main(){

	int a,b,c,d;
	cin>>a>>b>>c>>d;
	string s;
	cin>>s;
	long ans=0;
	for (int i = 0; i < s.size(); ++i)
	{
		switch(s[i]){
			case '1': ans+=a;
			break;
			case '2': ans+=b;
			break;
			case '3': ans+=c;
			break;
			case '4': ans+=d;
		}
	}
cout<<ans;
}