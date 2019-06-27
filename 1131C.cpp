#include<bits/stdc++.h>
using namespace std;

 int main(){

 	int n;
 	cin>>n;

 	int a[n];
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	sort(a,a+n);

 	vector<int> ans,ans1;
 	for(int i=0;i<n;i+=2)
 		ans.push_back(a[i]);
 	for(int i=1;i<n;i+=2)
 		ans1.push_back(a[i]);
 	reverse(ans1.begin(),ans1.end());
 	for(int i=0;i<ans1.size();i++)
 		ans.push_back(ans1[i]);

 	for(int i=0;i<ans.size();i++)
 		cout<<ans[i]<<" ";

 	return 0;
 }