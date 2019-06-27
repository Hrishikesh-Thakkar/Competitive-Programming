#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	int x=a[n-1];
	if(x==a[n-2])
		{cout<<x<<" "<<x; return 0;}
	for(int i=n-2;i>=1;i--)
	{
		if(x%a[i]!=0)
			{cout<<x<<" "<<a[i]; return 0;}
		else if((x%a[i]==0)&&(a[i]==a[i-1]))
			{cout<<x<<" "<<a[i]; return 0;}
	}
	return 0;
}