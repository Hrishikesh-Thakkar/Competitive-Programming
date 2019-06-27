#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int crime=0,cops=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			cops+=a[i];
		else if(a[i]==-1)
		{
			if(cops>0)
				cops--;
			else crime++;
		}
	}
	cout<<crime<<endl;
	
	return 0;
}