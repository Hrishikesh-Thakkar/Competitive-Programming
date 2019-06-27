#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	int ans=0;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int bcd[n];
	for(int i=0;i<n;i++)
		bcd[i]=0;
	bcd[0]=a[k-1];
	k--;
	if(bcd[0]==1)
		ans++;
	for(int i=1;i<n;i++)
	{
		if(k-i<0)
		{
			if(k+i>=n)
				continue;
			else bcd[i]=a[k+i];
		}
		else
		{
			if(k+i>=n)
				bcd[i]=a[k-i];
			else bcd[i]=a[k+i]+a[k-i];
		}
	}
//for(int i=0;i<n;i++)
//	cout<<bcd[i]<<" ";
for(int i=1;i<n;i++){
	if(bcd[i]==2)
		{ans+=2;
		//	cout<<"Cond1"<<" ";
		}
	else if(bcd[i]==1 &&((k-i<0 && k+i<n)||(k-i>=0 && k+i>=n)))
		{ans++; 
		//	cout<<"Cond2"<<" ";
		}
}

cout<<ans;
	return 0;
}