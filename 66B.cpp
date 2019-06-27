#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
int maxi=0;
for(int i=0;i<n;i++)
{
	int ans=0;
	int cur=a[i];
	for(int j=i-1;j>=0;j--){
			if(a[j]>cur)
				break;
			else {ans++;cur=a[j];}

	}
	
	cur=a[i];
	for(int j=i+1;j<n;j++ ){
			
			if(a[j]>cur)
				break;
			else {ans++;cur=a[j];}
			
	}
	maxi=max(maxi,ans);
}
cout<<maxi+1;

return 0;
}