#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	string s;
	cin>>s;
	int count_l=0, count_r=0,start_l=-1,start_r=-1;
	for(int i=n-1;i>=0;i--)
		if(s[i]=='L')
			{start_l=i; break;}
	for(int i=0;i<n;i++)
		if(s[i]=='R')
			{start_r=i; break;}
	for(int i=0;i<n;i++)
		if(s[i]=='L')
			count_l++;
		else if(s[i]=='R')
			count_r++;
	if(count_r==0){
		int end_l=-1;
		for(int i=start_l;i>=0;i--)
		{
			if(s[i]=='L')
				end_l=i;
			else break;
		}
		end_l--;
		cout<<start_l+1<<" "<<end_l+1<<endl;
		}
	else if(count_l==0){
		int end_r=-1;
		for(int i=start_r;i<n;i++)
		{
			if(s[i]=='R')
				end_r=i;
			else break;
		}
		end_r++;
		cout<<start_r+1<<" "<<end_r+1<<endl;
	}
	else{
			if(count_l>count_r)
				cout<<start_l+1<<" "<<start_l-count_l+2;
			else
				cout<<start_r+1<<" "<<start_r+count_r;
	}
		return 0;
	
}