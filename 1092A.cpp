#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;

	int t;
	cin>>t;

	while(t--){
	cin>>n>>k;
	//n is string size to be generated
	//k is a range
	//string should have at least of the i th letter i in range of k
	//maximize minimal frequency.

	string ans="";
	for(int i=0;i<k;i++)
		ans.push_back(char('a'+i));
	
	string rep=ans;
	int i;
	for(i=k;i<n-k;i+=k)
		ans+=rep;

	for(int j=i;j<n;j++)
		ans+=rep[j-i];
	cout<<ans<<endl;
}
	return 0;
}