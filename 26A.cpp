#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	bool prime[n+1]; 
	vector<int> prime_no;
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
         prime_no.push_back(p);

int count=0;

for(int i=6;i<=n;i++)
{

}

cout<<count/2<<endl;

         	return 0;

}