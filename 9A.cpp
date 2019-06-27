#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a;  
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int main(){
	int y,x;
	cin>>y>>x;

	int maxi=max(x,y);
	int num=6-maxi+1;
	int den=6;
	int div=gcd(den,num);
	cout<<num/div<<"/"<<den/div
	return 0;
}