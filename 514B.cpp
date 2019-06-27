#include<bits/stdc++.h>
using namespace std;

int main(){

int n,x_start,y_start;
cin>>n>>x_start>>y_start;
int ans=0;
set<double> s;
for(int i=0;i<n;i++){
	int x,y;
	cin>>x>>y;
	int num=y-y_start;
	int den=x-x_start;

	double slope=num/den;
	s.insert(slope);
}
for(auto it=s.begin(); it!=s.end();it++)
	ans++;
cout<<ans<<endl;
return 0;
}