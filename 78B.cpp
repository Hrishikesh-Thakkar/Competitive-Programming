#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
string s="VIBGYOR";
for(int i=0;i<n;i++)
	cout<<s[i%7];

return 0;
}