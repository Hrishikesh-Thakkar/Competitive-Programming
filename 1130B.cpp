#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
int n;
cin>>n;

int a[2*n];
for(int i=0;i<2*n;i++)
	cin>>a[i];
unordered_map<int,int> m,m1;
for(int i=0;i<2*n;i++)
	if(m[a[i]]==0)
		m[a[i]]=i+1;
	else
		m1[a[i]]=i+1;

long long int ans=0;
int start_pos=1;
for(int i=1;i<=n;i++)
{
	ans=ans+abs(m[i]-start_pos);
	start_pos=m[i];
}
start_pos=1;
for(int i=1;i<=n;i++)
{
	ans=ans+abs(m1[i]-start_pos);
	start_pos=m1[i];
}
cout<<ans;
return 0;
}