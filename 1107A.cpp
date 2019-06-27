#include<bits/stdc++.h>
using namespace std;

int main(){
	int num=2;
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(n==2)
		{
			if(s[0]>=s[1])
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl<<num<<endl<<s[0]<<" "<<s[1]<<endl;
		}
		else{
			cout<<"YES"<<endl<<num<<endl;
			cout<<s[0]<<" ";
			for(int i=1;i<s.size();i++)
				cout<<s[i];
			 cout<<endl;
		}
	}
	return 0;
}