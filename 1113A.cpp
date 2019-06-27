#include<bits/stdc++.h>
using namespace std;

int main(){

int n,v;
cin>>n>>v;

long long int cost=min(n-1,v);
for(int i=2;i<=n-v;i++)
	cost+=i;

cout<<cost<<endl;
return 0;
}