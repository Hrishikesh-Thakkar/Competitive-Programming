#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin>>n>>m;
char c;
int flag=0;
for(int i=0;i<n*m; i++)
	{
		cin>>c;
		if(c!='W' && c!='B' && c!='G')
			flag=1;
	}
if(flag)
	cout<<"#Color"<<endl;
else
	cout<<"#Black&White"<<endl;
return 0;
}