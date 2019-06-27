#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	long long int x[n],y[n],a[n],b[n];
	
	 long long int x_ans=0,y_ans=0;
	 for(int i=0;i<n;i++)
	 	{
	 		cin>>x[i];
	 		cin>>y[i];
	 	}
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	cin>>b[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	 	x_ans+=(x[i]+a[i]);
	 	y_ans+=(y[i]+b[i]);
	 }
	 cout<<x_ans/n<<" "<<y_ans/n;
	return 0;
}