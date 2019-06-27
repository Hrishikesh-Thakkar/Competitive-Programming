#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
int n;
cin>>n;
int l[n+1],r[n+1];
for(int i=1;i<=n;i++)
	cin>>l[i]>>r[i];
int k;
cin>>k;
int i;
int count=0;
for(int i=1;i<=n;i++)
	if(l[i]<=k)
		count++;

cout<<n-count+1;

return 0;
}