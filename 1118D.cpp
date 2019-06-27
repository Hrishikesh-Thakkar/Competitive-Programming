#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.rbegin(),a.rend());

	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<n;j++)
			sum+=max(a[j]-j/i,0);
		if (sum >= m) {
			cout << i << endl;
			return 0;
		}
	}
	
	cout << -1 << endl;
return 0;
}