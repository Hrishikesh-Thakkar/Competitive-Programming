#include<bits/stdc++.h>
using namespace std;

int d2(int a){
	while(a%2==0)
		a/=2;
	return a;
}
int d3(int a){
	while(a%3==0)
		a/=3;
	return a;
}
int d5(int a){
	while(a%5==0)
		a/=5;
	return a;
}
int main(){

int a,b;
cin>>a>>b;

int x=d2(d3(d5(a))),y=d2(d3(d5(b)));
if(x==y)
{
	int two_a=0,three_a=0,five_a=0,two_b=0,three_b=0,five_b=0;
	while(a%2==0)
		{a/=2; two_a++;}
	while(a%3==0)
		{a/=3; three_a++;}
	while(a%5==0)
		{a/=5; five_a++;}
	while(b%2==0)
		{b/=2; two_b++;}
	while(b%3==0)
		{b/=3; three_b++;}
	while(b%5==0)
		{b/=5; five_b++;}
	cout<<abs(two_b - two_a )+abs(three_a - three_b)+ abs(five_b - five_a);

}
else cout<<-1;
return 0;
}