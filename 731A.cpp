#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	char start='a';
	int ans=0;
	for(int i=0;i<s.size();i++){
		int diff=abs(s[i]-start);
		int diff1=abs(26-diff);
		ans+=min(diff,diff1);
		start=s[i];
	}
	cout<<ans;
	
	return 0;
}