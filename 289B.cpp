#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m,d;
cin>>n>>m>>d;

int mat[n][m];
vector<int> v;
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		cin>>mat[i][j];
int mod=mat[0][0]%d;
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		if(mat[i][j]%d!=mod)
			{cout<<-1; return 0;}

for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		v.push_back(mat[i][j]);

sort(v.begin(),v.end());


int k=v.size();
int index=(k/2);

int element=v[index];
long long int ans=0;

for(int i=0;i<k;i++) 
	{ans=ans+(abs(v[i]-element)/d); 
	//	cout<<ans<<endl;
	}

cout<<ans<<endl;


return 0;
}