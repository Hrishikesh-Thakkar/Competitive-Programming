#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k;
cin>>n>>k;

int a[n];
int ans[k];
for(int i=0;i<n;i++)
	cin>>a[i];
for(int i=0;i<k;i++)
	ans[i]=0;
for(int i=0;i<k;i++)
	for(int j=i;j<n;j+=k)
		ans[i]+=a[j];

int index=-1,mini=INT_MAX;
for(int i=0;i<k;i++)
{
	if(ans[i]<mini)
		{mini=ans[i]; index=i+1;}
}

cout<<index<<endl;
return 0;
}