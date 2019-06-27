#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;
	long long int a[5];
	for(int i=0;i<5;i++)
		a[i]=0;
	long long int b[5];
	for(int i=0;i<5;i++)
		b[i]=0;
	for(int i=1;i<=n;i++)
		a[i%5]++;
	for(int i=1;i<=m;i++)
		b[i%5]++;

	long long int ans=0;

	for(int i=1;i<=4;i++)
		ans=ans+a[i]*b[5-i];
	ans+=(a[0]*b[0]);
	cout<<ans<<endl;
	return 0;
}