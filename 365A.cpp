#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;
	cin>>n>>k;

	int num;
	int ans=0;
	while(n--){
		string s;
		cin>>s;
		
		int flag=0;
		map<int,int> m;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]-'0'>k)
				{ flag=1; break;}
			else m[s[i]-'0']=1;
		}
		int count=0;
		for(int i=0;i<=k;i++)
			if(m[i]==1)
	cout<<ans;
	return 0;
}
				count++;
		if(count==k+1 && flag==0 )
			ans++;
	}