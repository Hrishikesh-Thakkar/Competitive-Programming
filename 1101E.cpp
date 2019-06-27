#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int max_height=-1,max_width=-1;
	while(n--){ 
		char c;
		cin>>c;

		int a,b;
		cin>>a>>b;
		int x=max(a,b);
		int y=min(a,b);
		if(c=='+')
		{
			max_height=max(max_height,x);
			max_width=max(max_width,y);
		}
		else
		{
			if(x>=max_height && y>=max_width)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
 		return 0;
}