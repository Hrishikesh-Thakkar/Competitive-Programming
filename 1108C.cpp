#include<bits/stdc++.h>
using namespace std;
int change(string s,string s1)
{
	int count=0;
	for(int i=0;i<s.size();i+=3)
		if(s[i]!=s1[0])
			count++;
	for(int i=1;i<s.size();i+=3)
		if(s[i]!=s1[1])
			count++;
	for(int i=2;i<s.size();i+=3)
		if(s[i]!=s1[2])
			count++;
return count;
}
int main()
{

	int n;
	cin>>n;

	string s;
	cin>>s;

	if(n==1)
		cout<<0<<endl<<s;
	else if(n==2)
	{
		if(s[0]==s[1])
		{
			cout<<1<<endl;
			if(s[0]=='B')
				cout<<"BG";
			else if(s[0]=='G')
				cout<<"GB";
			else
				cout<<"RB";
		}
		else
			cout<<0<<endl<<s;
	}
	else
	{
		//take strings to be
		string s1,s2,s3,s4,s5,s6;
		s1="RGB";
		s2="RBG";
		s3="BRG";
		s4="BGR";
		s5="GRB";
		s6="GBR";
		vector<string> vec;
		vec.push_back(s1);
		vec.push_back(s2);
		vec.push_back(s3);
		vec.push_back(s4);
		vec.push_back(s5);
		vec.push_back(s6);
		int ans[7];
		for(int i=1;i<=6;i++)
			ans[i]=0;
		 ans[1]=change(s,s1);
		 ans[2]=change(s,s2);
		 ans[3]=change(s,s3);
		 ans[4]=change(s,s4);
		 ans[5]=change(s,s5);
		 ans[6]=change(s,s6);
int pos=1,mini=1000000;
for(int i=1;i<=6;i++)
	if(ans[i]<mini)
		{pos=i; mini=ans[i];}
	//cout<<"Position is"<<pos<<endl;
	cout<<mini<<endl;
	pos--;		
string output=vec[pos];
//cout<<"Output is:"<<output<<endl;
for(int i=1;i<=s.size();i++)
	if(i%3==1)
		cout<<output[0];
	else if(i%3==2)
		cout<<output[1];
	else
		cout<<output[2];
}
	return 0;
}