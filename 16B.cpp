#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
int main(){
int n,m;
cin>>n>>m;
vector<pair<int,int>> ma;
for(int i=0;i<m;i++)
{
	int a,b;
	cin>>a>>b;

	ma.push_back(make_pair(a,b));
}
sort(ma.begin(), ma.end(), sortbysec); 
long long int ans=0;
for(int i=0;i<m;i++){
	if(n-ma[i].first<0)
		{ans+=(n*ma[i].second);break;}
	else
		{ans+=(ma[i].first*ma[i].second);
			n-=ma[i].first;
		}
}
cout<<ans;
return 0;
}