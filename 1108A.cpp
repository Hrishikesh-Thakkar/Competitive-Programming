#include<bits/stdc++.h>
using namespace std;

int main(){

	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		if(a!=c)
			cout<<a<<" "<<c<<endl;
		else
			cout<<a<<" "<<d<<endl;
	}
	return 0;
}