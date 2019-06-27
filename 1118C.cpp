#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n*n;i++)
		cin>>a[i];
	int mat[n][n];
	//output matrix
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			mat[i][i]=0;
	//to check yes/or
	map<int,int> m;
	for(int i=0;i<n;i++)
		m[a[i]]++;

	if(n%2==0)
	{
		int count_odd=0;
		for(int i=0;i<n;i++)
			if(m[a[i]]%4!=0)
				count_odd++;
		if(count_odd>0)
			{cout<<"NO";return 0;}

		cout<<"YES"<<endl;
		n

	}
	else
	{
		int count_odd=0,count_not;
		for(int i=0;i<n;i++)
			if(m[a[i]]%4==1)
				count_odd++;
			else if(m[a[i]]%4!=0)
		if(count_odd>0)
			{cout<<"NO";return 0;}

	}
}