#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
int pos=0,neg=0;
for(int i=0;i<n;i++){
	if(a[i]>0)
		pos++;
	if(a[i]<0)
		neg++;
}
if(n%2==1)
	n++;

if(pos>=ceil(n/2))
	cout<<1;
else if(neg>=ceil(n/2))
	cout<<-1;
else
	cout<<0;
 				
return 0;
}