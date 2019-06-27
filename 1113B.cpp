#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

vector<int> a(n);
for(int i=0;i<n;i++)
	cin>>a[i];
 int mn = *min_element(a.begin(), a.end());
 int sum = accumulate(a.begin(), a.end(), 0);
 int res=sum;
for(int i=0;i<n;i++)
	for(int j=1;j<=a[i];j++){
		if(a[i]%j!=0) continue;
		int cur=sum-mn-a[i];
		cur+=(mn*j+a[i]/j);
		res=min(res,cur);
	}
cout<<res<<endl;
return 0;
}