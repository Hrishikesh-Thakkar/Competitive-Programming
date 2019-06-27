#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
int n;
cin>>n;

int a[n];
long long int sum=0;
for(int i=0;i<n;i++)
	{cin>>a[i];sum+=a[i];}
sort(a,a+n);
int m;
cin>>m;
while(m--){
	int q;
	cin>>q;
	cout<<sum-a[n-q]<<endl; 
}
return 0;
}