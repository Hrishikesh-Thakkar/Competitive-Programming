#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,t;
	cin>>n>>t;

	int a[n+1];
	for(int i=1;i<n;i++)
		cin>>a[i];
	
	for(int i=1;i<n;)
		{	//cout<<"i is:"<<i<<endl;
			if(i>t)
			break;
		else if(i+a[i]==t)
			{ cout<<"YES"; return 0;}
		else
			i+=a[i];
	}
cout<<"NO";
return 0;
}