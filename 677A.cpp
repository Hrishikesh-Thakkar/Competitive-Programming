#include<bits/stdc++.h>
using namespace std;

int main(){

int n,h;
cin>>n>>h;

int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
int count=0;
for(int i=0;i<n;i++)
	if(a[i]>h)
		count++;
cout<<count*2+(n-count)<<endl;

return 0;
}