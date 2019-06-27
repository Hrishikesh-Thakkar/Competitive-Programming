#include<bits/stdc++.h>
using namespace std;

int main(){

int b,k;
cin>>b>>k;

int a[k];
for(int i=0;i<k;i++)
	cin>>a[i];

long sum=0;
for(int i=0;i<k;i++)
{
	if(a[i]%2==0)
		a[i]=0;
	else
		a[i]=1;
}
if(b%2==1)
	b=1;
else
	b=0;
for(int i=0;i<k-1;i++)
{
	
sum=sum+(a[i]*b);
}
sum+=a[k-1];
if(sum%2==0)
	cout<<"even";
else
	cout<<"odd";
return 0;	
}