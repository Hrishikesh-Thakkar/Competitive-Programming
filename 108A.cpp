#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;
	if(s[0]=='0' && (s[1]>='6' && s[1]<='9'))
		cout<<"10:01"<<endl;
	else if(s[0]=='1' && (s[1]>='6' && s[1]<='9'))
		cout<<"20:02"<<endl;
	else
	{
		int sec=s[1]-'0';
		int first=(s[1]-s[3]);
		int second=(s[0]-s[4]);
		sec++;
		if(s[0]=='0' && s[1]=='5' && s[3]=='5')
			cout<<"10:01"<<endl;
		else if(s[0]=='1' && s[1]=='5' && s[3]=='5')
			cout<<"20:02"<<endl;
		else if(s[0]=='2' && s[1]=='3' && s[3]=='3' &&s[4]=='2')
			cout<<"00:00"<<endl;
		else if(first==0 && second)
			cout<<s[0]<<s[1]<<":"<<s[1]<<s[0];
		else cout<<s[0]<<sec<<":"<<sec<<s[0];
		//cout<<s[3]-s[1]<<" "<<s[4]-s[0];
	}
	return 0;
}