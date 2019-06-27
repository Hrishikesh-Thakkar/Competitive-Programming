#include<bits/stdc++.h>
using namespace std;

int process(int n){
	int sum=0;
	while(n%10){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{
	string s;
	cin>>s;
	if(s.size()==1)
		{
			cout<<0;
			return 0;
		}
	int count=1;
	int sum=0;
	for(int i=0;i<s.size();i++)
		sum+=(s[i]-'0');
	while(sum/10>=1){
		int y=process(sum);
		sum=y;
		count++;
	}
	cout<<count;
	return 0;
}