#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long int ans=0;
	for(int i=0;i<n/2;i++)
	{
		long long int num=a[i];
		long long int num1=a[n-i-1];
		//cout<<num<<" "<<num1<<endl;
		ans=ans+(num+num1)*(num+num1);
	}
	cout<<ans;
	return 0;
}