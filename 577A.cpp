#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,x;
	cin>>n>>x;

	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(x%i==0)
		{
			int y=x/i;
			
			if(y<=n)
				count++;
		}

	}
	cout<<count;
	return 0;
}