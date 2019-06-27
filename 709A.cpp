#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,b,d;
	cin>>n>>b>>d;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=0;
	int waste=0;
for (int i = 0; i <n; ++i)
{
	if(a[i]<=b){
		if(waste+a[i]<=d)
			{waste+=a[i];}
		else{
			waste=0;
			ans++;
		}
	}

}	
cout<<ans;
	return 0;
}