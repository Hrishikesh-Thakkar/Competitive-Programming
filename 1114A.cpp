#include<bits/stdc++.h>
using namespace std;

int main(){

	int x,y,z;
	cin>>x>>y>>z;
	int green,purple,black;
	cin>>green>>purple>>black;

	green-=x;
	if(green<0)
		{cout<<"NO"; return 0;}
	int remaining=green+purple+black;
	remaining-=black;
	if(remaining<y)
		{cout<<"NO";return 0;}
	remaining+=black;
	remaining-=y;

	if(remaining<z)
		{cout<<"NO"; return 0;}
	cout<<"YES";
	

	return 0;
}