#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)
	cin>>a[i];

int ePref=0,oPref=0,eSuf=0,oSuf=0;

for(int i=0;i<n;i++)
	if(i%2==0)
		eSuf+=a[i];
	else
		oSuf+=a[i];

int ans=0;

for(int i=0;i<n;i++){
	if(i%2==0) eSuf-=a[i];
	else oSuf-=a[i];

	if(ePref+oSuf == oPref+eSuf)
		ans++;
	if(i%2==0) ePref+=a[i];
	else oPref+=a[i];

}
cout<<ans<<endl;
return 0;
}