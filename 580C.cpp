#include<bits/stdc++.h>
using namespace std;

int m,ans;
vector<int> adj[100005];
int cat[100001];
bool visited[100005];

void dfs(int vertex, int cats){

if(cat[vertex]) cats++;
else cats=0;

if(cats>m) return;

for(auto it: adj[vertex]){
	if(visited[it])
		continue;
	visited[it]=true;
	dfs(it,cats);
}
if(adj[vertex].size()==1 && vertex!=1)
	ans++;
}

int main(){
	ans=0;
	
	int n;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
		visited[i]=false;
	for(int i=1;i<=n;i++)
		cin>>cat[i];
	int x,y;
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	visited[1]=true;
	dfs(1,0);
	cout<<ans<<endl;
	return 0;
}