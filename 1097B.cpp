#include<bits/stdc++.h>
using namespace std;

string to_binary(int n){
	string s="";
	
	 while (n > 0) { 
  	
        // storing remainder in binary array 
        int num=n%2;
        string s1=to_string(num);
      
        s+=s1; 
        n = n / 2; 
    } 
//  cout<<s<<endl;
  return s;
}
int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int upper=pow(2,15)-1;
	for(int i=0;i<=upper;i++)
	{	
		long long int ans=0;
		string s=to_binary(i);
		cout<<s<<endl;
		//if(ans%360==0)
		//	{cout<<"YES"<<endl; return 0;}
	}
	cout<<"NO"<<endl;
	return 0;
}