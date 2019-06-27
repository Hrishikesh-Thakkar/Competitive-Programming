#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void primeFactors(int n) 
{ 
    while (n%2 == 0) 
    { 
       v.push_back(2);
        n = n/2; 
    } 
  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
       
        while (n%i == 0) 
        { 
            v.push_back(i);
            n = n/i; 
        } 
    } 
  

    if (n > 2) 
      v.push_back(n);
} 
int main()
{
int n;
cin>>n;
primeFactors(n);
cout<<n<<" ";
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
	{
		n/=v[i];
		cout<<n<<" ";
	}
	//cout<<1<<" ";
return 0;
}