#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int ans=0;
	
	int start_a=0,start_b=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(start_a==a && start_b==b)
			 continue;

		for(int j=max(start_b,start_a);j<=min(a,b);j++)
			{
				if(a==0 && b==0)
					ans=ans+0;
				else
					ans++;
			}
		start_a=a; start_b=b;
	}
cout<<max(1,ans);
return 0;
}