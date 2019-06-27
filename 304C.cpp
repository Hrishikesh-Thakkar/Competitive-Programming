#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

if(n%2==0)
	cout<<-1;
else
{
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
		{cout<<i<<" ";a[i]=i;}
	cout<<endl;
	b[0]=a[n-1];
	cout<<b[0]<<" ";
	for(int i=1;i<n;i++)
		{
			b[i]=a[i-1];
			cout<<b[i]<<" ";
		}
	cout<<endl;
	for(int i=0;i<n;i++)
		{
			c[i]=(a[i]+b[i])%n;
			cout<<c[i]<<" ";
		}
}
return 0;
}